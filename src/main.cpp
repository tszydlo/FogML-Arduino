#include <Arduino.h>
#include <Wire.h>
#include <Arduino_LSM9DS1.h>
#include <Arduino_APDS9960.h>

//#define DATA_LOGGER
//#define DEBUG

#include "fogml_config.h"

#define LEARNING_SAMPLES  16

#define RED 22     
#define BLUE 24     
#define GREEN 23

float my_time_series[ACC_TIME_TICKS * ACC_AXIS];
int ticks_stored;

unsigned long time_before;
unsigned long time_after;

bool learning;
int learning_samples;

float score;

void setup()
{
  Serial.begin(9600);

  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(LED_BUILTIN, LOW);
  
  digitalWrite(RED, HIGH);
  delay(200);
  digitalWrite(RED, LOW);

  if (!IMU.begin()) {
    Serial.println("Failed to initialize IMU!");
    while (1);
  }

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor!");
    while (1);
  }

#ifdef DEBUG
  Serial.print("Accelerometer sample rate = ");
  Serial.print(IMU.accelerationSampleRate());
  Serial.println(" Hz");
#endif

  ticks_stored = 0;

  time_before = millis();

  learning = false;
  learning_samples = 0;
}

void led_all_off() {
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, HIGH);
}

void print_timeseries(int ticks, int axis, float *tab) {
  for(int i=0; i < ticks*axis; i++) {
    Serial.print(tab[i]);

    if (i < (ticks*axis - 1) ) {
      Serial.print(", ");
    } else {
      Serial.println();
    }
  }
}

void proximity_detection() {

  if (APDS.proximityAvailable()) {
    int proximity = APDS.readProximity();

    if (proximity < 10 ) {
      Serial.println("LEARNING!");
      learning = true;
      delay(1000);
    }
  }
}

void loop()
{
  if (IMU.accelerationAvailable()) {
    IMU.readAcceleration(my_time_series[ticks_stored * ACC_AXIS + 0], 
                         my_time_series[ticks_stored * ACC_AXIS + 1], 
                         my_time_series[ticks_stored * ACC_AXIS + 2]);

    ticks_stored++;

    if (ticks_stored == ACC_TIME_TICKS) {
      time_after = millis();

#ifdef DEBUG
      Serial.print("Hz = ");
      Serial.println(1000.0/(time_after - time_before)*ACC_TIME_TICKS);
#endif

#ifdef DATA_LOGGER
      fogml_features_logger(my_time_series);
#else
      if (learning) {
        led_all_off();
        digitalWrite(BLUE, LOW);
        fogml_learning(my_time_series);
        digitalWrite(BLUE, HIGH);
        learning_samples++;

        if (learning_samples==LEARNING_SAMPLES) {
          learning_samples = 0;
          learning = false;
          digitalWrite(BLUE, HIGH);
        }
      } else {
        fogml_processing(my_time_series, &score);

        fogml_classification(my_time_series);

        if (score > 2.5) {
          digitalWrite(RED, LOW);
        } else {
          digitalWrite(RED, HIGH);
        }
      }
    
      proximity_detection();
#endif

      ticks_stored = 0;
      time_before = millis();
    }
  }
  
  delay(1);
}
