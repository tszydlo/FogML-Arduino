/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

int classifier(float * x){
  int results[100];
  if (x[9] <= 37.5000000000) {
    if (x[4] <= 0.0149999997) {
      results[0] = 0;
    }
    else {
      results[0] = 3;
    }
  }
  else {
    if (x[4] <= 0.0299999993) {
      results[0] = 1;
    }
    else {
      results[0] = 2;
    }
  }
  if (x[6] <= 0.0499999989) {
    if (x[0] <= 0.0199999996) {
      results[1] = 0;
    }
    else {
      if (x[7] <= 0.0900000036) {
        results[1] = 1;
      }
      else {
        results[1] = 3;
      }
    }
  }
  else {
    results[1] = 2;
  }
  if (x[7] <= 0.1049999986) {
    if (x[4] <= 0.0149999997) {
      results[2] = 0;
    }
    else {
      if (x[8] <= 0.0049999999) {
        results[2] = 1;
      }
      else {
        results[2] = 2;
      }
    }
  }
  else {
    results[2] = 3;
  }
  if (x[4] <= 0.0299999993) {
    if (x[0] <= 0.0199999996) {
      results[3] = 0;
    }
    else {
      if (x[10] <= 24.5000000000) {
        results[3] = 3;
      }
      else {
        results[3] = 1;
      }
    }
  }
  else {
    results[3] = 2;
  }
  if (x[2] <= 0.0449999990) {
    if (x[10] <= 9.0000000000) {
      results[4] = 0;
    }
    else {
      results[4] = 1;
    }
  }
  else {
    if (x[8] <= 0.0049999999) {
      results[4] = 3;
    }
    else {
      results[4] = 2;
    }
  }
  if (x[0] <= 0.0849999990) {
    if (x[0] <= 0.0199999996) {
      results[5] = 0;
    }
    else {
      if (x[2] <= 0.1000000006) {
        results[5] = 1;
      }
      else {
        results[5] = 3;
      }
    }
  }
  else {
    results[5] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[0] <= 0.0800000001) {
      if (x[0] <= 0.0199999996) {
        results[6] = 0;
      }
      else {
        results[6] = 1;
      }
    }
    else {
      results[6] = 2;
    }
  }
  else {
    results[6] = 3;
  }
  if (x[4] <= 0.0149999997) {
    results[7] = 0;
  }
  else {
    if (x[9] <= 37.5000000000) {
      results[7] = 3;
    }
    else {
      if (x[0] <= 0.0800000001) {
        results[7] = 1;
      }
      else {
        results[7] = 2;
      }
    }
  }
  if (x[6] <= 0.0499999989) {
    if (x[7] <= 0.0949999988) {
      if (x[10] <= 9.0000000000) {
        results[8] = 0;
      }
      else {
        results[8] = 1;
      }
    }
    else {
      results[8] = 3;
    }
  }
  else {
    results[8] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[10] <= 8.0000000000) {
      results[9] = 0;
    }
    else {
      if (x[4] <= 0.0299999993) {
        results[9] = 1;
      }
      else {
        results[9] = 2;
      }
    }
  }
  else {
    results[9] = 3;
  }
  if (x[7] <= 0.1049999986) {
    if (x[9] <= 46.5000000000) {
      if (x[7] <= 0.0099999998) {
        results[10] = 0;
      }
      else {
        results[10] = 2;
      }
    }
    else {
      results[10] = 1;
    }
  }
  else {
    results[10] = 3;
  }
  if (x[10] <= 21.5000000000) {
    if (x[7] <= 0.0099999998) {
      if (x[5] <= 0.9850000143) {
        results[11] = 1;
      }
      else {
        results[11] = 0;
      }
    }
    else {
      results[11] = 2;
    }
  }
  else {
    if (x[2] <= 0.1000000006) {
      results[11] = 1;
    }
    else {
      results[11] = 3;
    }
  }
  if (x[2] <= 0.1250000000) {
    if (x[11] <= 20.5000000000) {
      results[12] = 0;
    }
    else {
      if (x[7] <= 0.0049999999) {
        results[12] = 1;
      }
      else {
        results[12] = 2;
      }
    }
  }
  else {
    results[12] = 3;
  }
  if (x[8] <= 0.0049999999) {
    if (x[7] <= 0.0949999988) {
      if (x[9] <= 25.0000000000) {
        results[13] = 0;
      }
      else {
        results[13] = 1;
      }
    }
    else {
      results[13] = 3;
    }
  }
  else {
    results[13] = 2;
  }
  if (x[6] <= 0.0499999989) {
    if (x[9] <= 14.0000000000) {
      results[14] = 0;
    }
    else {
      if (x[10] <= 25.5000000000) {
        results[14] = 3;
      }
      else {
        results[14] = 1;
      }
    }
  }
  else {
    results[14] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[0] <= 0.0199999996) {
      results[15] = 0;
    }
    else {
      if (x[2] <= 0.1050000032) {
        results[15] = 1;
      }
      else {
        results[15] = 3;
      }
    }
  }
  else {
    results[15] = 2;
  }
  if (x[4] <= 0.0299999993) {
    if (x[9] <= 42.0000000000) {
      if (x[6] <= 0.0049999999) {
        results[16] = 0;
      }
      else {
        results[16] = 3;
      }
    }
    else {
      results[16] = 1;
    }
  }
  else {
    results[16] = 2;
  }
  if (x[9] <= 37.5000000000) {
    if (x[4] <= 0.0099999998) {
      results[17] = 0;
    }
    else {
      results[17] = 3;
    }
  }
  else {
    if (x[7] <= 0.0049999999) {
      results[17] = 1;
    }
    else {
      results[17] = 2;
    }
  }
  if (x[8] <= 0.0049999999) {
    if (x[2] <= 0.1050000032) {
      if (x[9] <= 25.5000000000) {
        results[18] = 0;
      }
      else {
        results[18] = 1;
      }
    }
    else {
      results[18] = 3;
    }
  }
  else {
    results[18] = 2;
  }
  if (x[10] <= 8.0000000000) {
    results[19] = 0;
  }
  else {
    if (x[7] <= 0.1000000034) {
      if (x[0] <= 0.0800000001) {
        results[19] = 1;
      }
      else {
        results[19] = 2;
      }
    }
    else {
      results[19] = 3;
    }
  }
  if (x[0] <= 0.0849999990) {
    if (x[9] <= 42.0000000000) {
      if (x[6] <= 0.0049999999) {
        results[20] = 0;
      }
      else {
        results[20] = 3;
      }
    }
    else {
      results[20] = 1;
    }
  }
  else {
    results[20] = 2;
  }
  if (x[6] <= 0.0499999989) {
    if (x[7] <= 0.0900000036) {
      if (x[4] <= 0.0149999997) {
        results[21] = 0;
      }
      else {
        results[21] = 1;
      }
    }
    else {
      results[21] = 3;
    }
  }
  else {
    results[21] = 2;
  }
  if (x[8] <= 0.0049999999) {
    if (x[2] <= 0.0099999998) {
      results[22] = 0;
    }
    else {
      if (x[7] <= 0.1000000015) {
        results[22] = 1;
      }
      else {
        results[22] = 3;
      }
    }
  }
  else {
    results[22] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[0] <= 0.0199999996) {
      results[23] = 0;
    }
    else {
      if (x[2] <= 0.1000000006) {
        results[23] = 1;
      }
      else {
        results[23] = 3;
      }
    }
  }
  else {
    results[23] = 2;
  }
  if (x[0] <= 0.0199999996) {
    results[24] = 0;
  }
  else {
    if (x[10] <= 20.5000000000) {
      if (x[4] <= 0.0299999993) {
        results[24] = 1;
      }
      else {
        results[24] = 2;
      }
    }
    else {
      if (x[7] <= 0.0900000036) {
        results[24] = 1;
      }
      else {
        results[24] = 3;
      }
    }
  }
  if (x[4] <= 0.0299999993) {
    if (x[11] <= 43.5000000000) {
      if (x[10] <= 11.0000000000) {
        results[25] = 0;
      }
      else {
        results[25] = 3;
      }
    }
    else {
      results[25] = 1;
    }
  }
  else {
    results[25] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[8] <= 0.0049999999) {
      if (x[2] <= 0.0099999998) {
        results[26] = 0;
      }
      else {
        results[26] = 1;
      }
    }
    else {
      results[26] = 2;
    }
  }
  else {
    results[26] = 3;
  }
  if (x[8] <= 0.0049999999) {
    if (x[11] <= 13.5000000000) {
      results[27] = 0;
    }
    else {
      if (x[10] <= 25.5000000000) {
        results[27] = 3;
      }
      else {
        results[27] = 1;
      }
    }
  }
  else {
    results[27] = 2;
  }
  if (x[2] <= 0.1250000000) {
    if (x[7] <= 0.0049999999) {
      if (x[9] <= 27.0000000000) {
        results[28] = 0;
      }
      else {
        results[28] = 1;
      }
    }
    else {
      results[28] = 2;
    }
  }
  else {
    results[28] = 3;
  }
  if (x[2] <= 0.1250000000) {
    if (x[8] <= 0.0049999999) {
      if (x[4] <= 0.0149999997) {
        results[29] = 0;
      }
      else {
        results[29] = 1;
      }
    }
    else {
      results[29] = 2;
    }
  }
  else {
    results[29] = 3;
  }
  if (x[4] <= 0.0299999993) {
    if (x[2] <= 0.1000000006) {
      if (x[9] <= 25.0000000000) {
        results[30] = 0;
      }
      else {
        results[30] = 1;
      }
    }
    else {
      results[30] = 3;
    }
  }
  else {
    results[30] = 2;
  }
  if (x[2] <= 0.1300000027) {
    if (x[11] <= 20.5000000000) {
      results[31] = 0;
    }
    else {
      if (x[4] <= 0.0299999993) {
        results[31] = 1;
      }
      else {
        results[31] = 2;
      }
    }
  }
  else {
    results[31] = 3;
  }
  if (x[10] <= 8.0000000000) {
    results[32] = 0;
  }
  else {
    if (x[0] <= 0.0849999990) {
      if (x[7] <= 0.0949999988) {
        results[32] = 1;
      }
      else {
        results[32] = 3;
      }
    }
    else {
      results[32] = 2;
    }
  }
  if (x[9] <= 47.0000000000) {
    if (x[9] <= 38.0000000000) {
      if (x[4] <= 0.0149999997) {
        results[33] = 0;
      }
      else {
        results[33] = 3;
      }
    }
    else {
      results[33] = 2;
    }
  }
  else {
    results[33] = 1;
  }
  if (x[6] <= 0.0499999989) {
    if (x[6] <= 0.0049999999) {
      results[34] = 0;
    }
    else {
      if (x[0] <= 0.0549999997) {
        results[34] = 1;
      }
      else {
        results[34] = 3;
      }
    }
  }
  else {
    results[34] = 2;
  }
  if (x[8] <= 0.0049999999) {
    if (x[11] <= 44.0000000000) {
      if (x[9] <= 14.0000000000) {
        results[35] = 0;
      }
      else {
        results[35] = 3;
      }
    }
    else {
      results[35] = 1;
    }
  }
  else {
    results[35] = 2;
  }
  if (x[4] <= 0.0299999993) {
    if (x[7] <= 0.0900000036) {
      if (x[2] <= 0.0099999998) {
        results[36] = 0;
      }
      else {
        results[36] = 1;
      }
    }
    else {
      results[36] = 3;
    }
  }
  else {
    results[36] = 2;
  }
  if (x[4] <= 0.0299999993) {
    if (x[11] <= 15.0000000000) {
      results[37] = 0;
    }
    else {
      if (x[9] <= 42.0000000000) {
        results[37] = 3;
      }
      else {
        results[37] = 1;
      }
    }
  }
  else {
    results[37] = 2;
  }
  if (x[7] <= 0.1049999986) {
    if (x[8] <= 0.0049999999) {
      if (x[11] <= 22.5000000000) {
        results[38] = 0;
      }
      else {
        results[38] = 1;
      }
    }
    else {
      results[38] = 2;
    }
  }
  else {
    results[38] = 3;
  }
  if (x[2] <= 0.0449999990) {
    if (x[6] <= 0.0049999999) {
      results[39] = 0;
    }
    else {
      results[39] = 1;
    }
  }
  else {
    if (x[8] <= 0.0049999999) {
      results[39] = 3;
    }
    else {
      results[39] = 2;
    }
  }
  if (x[7] <= 0.1000000034) {
    if (x[6] <= 0.0449999990) {
      if (x[10] <= 9.0000000000) {
        results[40] = 0;
      }
      else {
        results[40] = 1;
      }
    }
    else {
      results[40] = 2;
    }
  }
  else {
    results[40] = 3;
  }
  if (x[2] <= 0.1250000000) {
    if (x[6] <= 0.0449999990) {
      if (x[2] <= 0.0099999998) {
        results[41] = 0;
      }
      else {
        results[41] = 1;
      }
    }
    else {
      results[41] = 2;
    }
  }
  else {
    results[41] = 3;
  }
  if (x[11] <= 13.5000000000) {
    results[42] = 0;
  }
  else {
    if (x[11] <= 43.5000000000) {
      if (x[9] <= 38.0000000000) {
        results[42] = 3;
      }
      else {
        results[42] = 2;
      }
    }
    else {
      results[42] = 1;
    }
  }
  if (x[11] <= 14.5000000000) {
    results[43] = 0;
  }
  else {
    if (x[4] <= 0.0299999993) {
      if (x[2] <= 0.1000000006) {
        results[43] = 1;
      }
      else {
        results[43] = 3;
      }
    }
    else {
      results[43] = 2;
    }
  }
  if (x[8] <= 0.0049999999) {
    if (x[10] <= 9.0000000000) {
      results[44] = 0;
    }
    else {
      if (x[6] <= 0.0149999997) {
        results[44] = 1;
      }
      else {
        results[44] = 3;
      }
    }
  }
  else {
    results[44] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[9] <= 42.0000000000) {
      if (x[2] <= 0.0850000009) {
        results[45] = 0;
      }
      else {
        results[45] = 3;
      }
    }
    else {
      results[45] = 1;
    }
  }
  else {
    results[45] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[2] <= 0.1050000032) {
      if (x[10] <= 9.0000000000) {
        results[46] = 0;
      }
      else {
        results[46] = 1;
      }
    }
    else {
      results[46] = 3;
    }
  }
  else {
    results[46] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[11] <= 43.5000000000) {
      if (x[10] <= 21.0000000000) {
        results[47] = 0;
      }
      else {
        results[47] = 3;
      }
    }
    else {
      results[47] = 1;
    }
  }
  else {
    results[47] = 2;
  }
  if (x[8] <= 0.0049999999) {
    if (x[11] <= 43.5000000000) {
      if (x[7] <= 0.1000000015) {
        results[48] = 0;
      }
      else {
        results[48] = 3;
      }
    }
    else {
      results[48] = 1;
    }
  }
  else {
    results[48] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[8] <= 0.0049999999) {
      if (x[10] <= 9.0000000000) {
        results[49] = 0;
      }
      else {
        results[49] = 1;
      }
    }
    else {
      results[49] = 2;
    }
  }
  else {
    results[49] = 3;
  }
  if (x[6] <= 0.0499999989) {
    if (x[10] <= 9.0000000000) {
      results[50] = 0;
    }
    else {
      if (x[2] <= 0.1050000032) {
        results[50] = 1;
      }
      else {
        results[50] = 3;
      }
    }
  }
  else {
    results[50] = 2;
  }
  if (x[2] <= 0.1250000000) {
    if (x[7] <= 0.0099999998) {
      if (x[10] <= 9.0000000000) {
        results[51] = 0;
      }
      else {
        results[51] = 1;
      }
    }
    else {
      results[51] = 2;
    }
  }
  else {
    results[51] = 3;
  }
  if (x[8] <= 0.0049999999) {
    if (x[2] <= 0.1000000006) {
      if (x[4] <= 0.0149999997) {
        results[52] = 0;
      }
      else {
        results[52] = 1;
      }
    }
    else {
      results[52] = 3;
    }
  }
  else {
    results[52] = 2;
  }
  if (x[9] <= 38.5000000000) {
    if (x[9] <= 13.5000000000) {
      results[53] = 0;
    }
    else {
      results[53] = 3;
    }
  }
  else {
    if (x[0] <= 0.0800000001) {
      results[53] = 1;
    }
    else {
      results[53] = 2;
    }
  }
  if (x[10] <= 21.5000000000) {
    if (x[7] <= 0.0049999999) {
      if (x[9] <= 28.0000000000) {
        results[54] = 0;
      }
      else {
        results[54] = 1;
      }
    }
    else {
      results[54] = 2;
    }
  }
  else {
    if (x[7] <= 0.0900000036) {
      results[54] = 1;
    }
    else {
      results[54] = 3;
    }
  }
  if (x[9] <= 37.5000000000) {
    if (x[4] <= 0.0099999998) {
      results[55] = 0;
    }
    else {
      results[55] = 3;
    }
  }
  else {
    if (x[7] <= 0.0099999998) {
      results[55] = 1;
    }
    else {
      results[55] = 2;
    }
  }
  if (x[10] <= 21.5000000000) {
    if (x[7] <= 0.0049999999) {
      if (x[2] <= 0.0099999998) {
        results[56] = 0;
      }
      else {
        results[56] = 1;
      }
    }
    else {
      results[56] = 2;
    }
  }
  else {
    if (x[9] <= 42.5000000000) {
      results[56] = 3;
    }
    else {
      results[56] = 1;
    }
  }
  if (x[9] <= 38.0000000000) {
    if (x[0] <= 0.0250000004) {
      results[57] = 0;
    }
    else {
      results[57] = 3;
    }
  }
  else {
    if (x[8] <= 0.0049999999) {
      results[57] = 1;
    }
    else {
      results[57] = 2;
    }
  }
  if (x[0] <= 0.0849999990) {
    if (x[11] <= 44.0000000000) {
      if (x[6] <= 0.0049999999) {
        results[58] = 0;
      }
      else {
        results[58] = 3;
      }
    }
    else {
      results[58] = 1;
    }
  }
  else {
    results[58] = 2;
  }
  if (x[11] <= 44.0000000000) {
    if (x[6] <= 0.0499999989) {
      if (x[4] <= 0.0099999998) {
        results[59] = 0;
      }
      else {
        results[59] = 3;
      }
    }
    else {
      results[59] = 2;
    }
  }
  else {
    results[59] = 1;
  }
  if (x[9] <= 46.5000000000) {
    if (x[4] <= 0.0299999993) {
      if (x[6] <= 0.0049999999) {
        results[60] = 0;
      }
      else {
        results[60] = 3;
      }
    }
    else {
      results[60] = 2;
    }
  }
  else {
    results[60] = 1;
  }
  if (x[11] <= 44.0000000000) {
    if (x[10] <= 22.0000000000) {
      if (x[9] <= 20.5000000000) {
        results[61] = 0;
      }
      else {
        results[61] = 2;
      }
    }
    else {
      results[61] = 3;
    }
  }
  else {
    results[61] = 1;
  }
  if (x[0] <= 0.0849999990) {
    if (x[11] <= 42.5000000000) {
      if (x[10] <= 11.0000000000) {
        results[62] = 0;
      }
      else {
        results[62] = 3;
      }
    }
    else {
      results[62] = 1;
    }
  }
  else {
    results[62] = 2;
  }
  if (x[11] <= 44.0000000000) {
    if (x[11] <= 13.5000000000) {
      results[63] = 0;
    }
    else {
      if (x[7] <= 0.1049999986) {
        results[63] = 2;
      }
      else {
        results[63] = 3;
      }
    }
  }
  else {
    results[63] = 1;
  }
  if (x[0] <= 0.0199999996) {
    results[64] = 0;
  }
  else {
    if (x[0] <= 0.0849999990) {
      if (x[11] <= 40.5000000000) {
        results[64] = 3;
      }
      else {
        results[64] = 1;
      }
    }
    else {
      results[64] = 2;
    }
  }
  if (x[2] <= 0.1300000027) {
    if (x[2] <= 0.0449999990) {
      if (x[10] <= 9.0000000000) {
        results[65] = 0;
      }
      else {
        results[65] = 1;
      }
    }
    else {
      results[65] = 2;
    }
  }
  else {
    results[65] = 3;
  }
  if (x[4] <= 0.0299999993) {
    if (x[11] <= 41.5000000000) {
      if (x[2] <= 0.0850000009) {
        results[66] = 0;
      }
      else {
        results[66] = 3;
      }
    }
    else {
      results[66] = 1;
    }
  }
  else {
    results[66] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[11] <= 20.5000000000) {
      results[67] = 0;
    }
    else {
      if (x[7] <= 0.0099999998) {
        results[67] = 1;
      }
      else {
        results[67] = 2;
      }
    }
  }
  else {
    results[67] = 3;
  }
  if (x[2] <= 0.1250000000) {
    if (x[0] <= 0.0800000001) {
      if (x[6] <= 0.0049999999) {
        results[68] = 0;
      }
      else {
        results[68] = 1;
      }
    }
    else {
      results[68] = 2;
    }
  }
  else {
    results[68] = 3;
  }
  if (x[9] <= 46.5000000000) {
    if (x[9] <= 38.0000000000) {
      if (x[2] <= 0.0850000009) {
        results[69] = 0;
      }
      else {
        results[69] = 3;
      }
    }
    else {
      results[69] = 2;
    }
  }
  else {
    results[69] = 1;
  }
  if (x[7] <= 0.1000000034) {
    if (x[7] <= 0.0049999999) {
      if (x[6] <= 0.0049999999) {
        results[70] = 0;
      }
      else {
        results[70] = 1;
      }
    }
    else {
      results[70] = 2;
    }
  }
  else {
    results[70] = 3;
  }
  if (x[7] <= 0.1049999986) {
    if (x[6] <= 0.0449999990) {
      if (x[11] <= 22.5000000000) {
        results[71] = 0;
      }
      else {
        results[71] = 1;
      }
    }
    else {
      results[71] = 2;
    }
  }
  else {
    results[71] = 3;
  }
  if (x[4] <= 0.0299999993) {
    if (x[7] <= 0.0900000036) {
      if (x[9] <= 25.5000000000) {
        results[72] = 0;
      }
      else {
        results[72] = 1;
      }
    }
    else {
      results[72] = 3;
    }
  }
  else {
    results[72] = 2;
  }
  if (x[8] <= 0.0049999999) {
    if (x[0] <= 0.0199999996) {
      results[73] = 0;
    }
    else {
      if (x[11] <= 41.0000000000) {
        results[73] = 3;
      }
      else {
        results[73] = 1;
      }
    }
  }
  else {
    results[73] = 2;
  }
  if (x[6] <= 0.0499999989) {
    if (x[2] <= 0.1000000006) {
      if (x[5] <= 0.9850000143) {
        results[74] = 1;
      }
      else {
        results[74] = 0;
      }
    }
    else {
      results[74] = 3;
    }
  }
  else {
    results[74] = 2;
  }
  if (x[9] <= 37.0000000000) {
    if (x[10] <= 11.0000000000) {
      results[75] = 0;
    }
    else {
      results[75] = 3;
    }
  }
  else {
    if (x[6] <= 0.0449999990) {
      results[75] = 1;
    }
    else {
      results[75] = 2;
    }
  }
  if (x[8] <= 0.0049999999) {
    if (x[7] <= 0.0900000036) {
      if (x[9] <= 25.0000000000) {
        results[76] = 0;
      }
      else {
        results[76] = 1;
      }
    }
    else {
      results[76] = 3;
    }
  }
  else {
    results[76] = 2;
  }
  if (x[7] <= 0.1049999986) {
    if (x[8] <= 0.0049999999) {
      if (x[0] <= 0.0199999996) {
        results[77] = 0;
      }
      else {
        results[77] = 1;
      }
    }
    else {
      results[77] = 2;
    }
  }
  else {
    results[77] = 3;
  }
  if (x[4] <= 0.0299999993) {
    if (x[10] <= 9.0000000000) {
      results[78] = 0;
    }
    else {
      if (x[10] <= 26.0000000000) {
        results[78] = 3;
      }
      else {
        results[78] = 1;
      }
    }
  }
  else {
    results[78] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[2] <= 0.0449999990) {
      if (x[0] <= 0.0199999996) {
        results[79] = 0;
      }
      else {
        results[79] = 1;
      }
    }
    else {
      results[79] = 2;
    }
  }
  else {
    results[79] = 3;
  }
  if (x[8] <= 0.0049999999) {
    if (x[0] <= 0.0199999996) {
      results[80] = 0;
    }
    else {
      if (x[9] <= 42.5000000000) {
        results[80] = 3;
      }
      else {
        results[80] = 1;
      }
    }
  }
  else {
    results[80] = 2;
  }
  if (x[8] <= 0.0049999999) {
    if (x[6] <= 0.0049999999) {
      results[81] = 0;
    }
    else {
      if (x[9] <= 42.0000000000) {
        results[81] = 3;
      }
      else {
        results[81] = 1;
      }
    }
  }
  else {
    results[81] = 2;
  }
  if (x[6] <= 0.0499999989) {
    if (x[2] <= 0.1050000032) {
      if (x[4] <= 0.0149999997) {
        results[82] = 0;
      }
      else {
        results[82] = 1;
      }
    }
    else {
      results[82] = 3;
    }
  }
  else {
    results[82] = 2;
  }
  if (x[9] <= 46.5000000000) {
    if (x[6] <= 0.0499999989) {
      if (x[2] <= 0.0900000036) {
        results[83] = 0;
      }
      else {
        results[83] = 3;
      }
    }
    else {
      results[83] = 2;
    }
  }
  else {
    results[83] = 1;
  }
  if (x[2] <= 0.1300000027) {
    if (x[9] <= 46.5000000000) {
      if (x[10] <= 8.0000000000) {
        results[84] = 0;
      }
      else {
        results[84] = 2;
      }
    }
    else {
      results[84] = 1;
    }
  }
  else {
    results[84] = 3;
  }
  if (x[0] <= 0.0849999990) {
    if (x[7] <= 0.0949999988) {
      if (x[4] <= 0.0149999997) {
        results[85] = 0;
      }
      else {
        results[85] = 1;
      }
    }
    else {
      results[85] = 3;
    }
  }
  else {
    results[85] = 2;
  }
  if (x[7] <= 0.1000000034) {
    if (x[6] <= 0.0449999990) {
      if (x[2] <= 0.0099999998) {
        results[86] = 0;
      }
      else {
        results[86] = 1;
      }
    }
    else {
      results[86] = 2;
    }
  }
  else {
    results[86] = 3;
  }
  if (x[6] <= 0.0499999989) {
    if (x[2] <= 0.1000000006) {
      if (x[6] <= 0.0049999999) {
        results[87] = 0;
      }
      else {
        results[87] = 1;
      }
    }
    else {
      results[87] = 3;
    }
  }
  else {
    results[87] = 2;
  }
  if (x[2] <= 0.1300000027) {
    if (x[2] <= 0.0449999990) {
      if (x[11] <= 23.5000000000) {
        results[88] = 0;
      }
      else {
        results[88] = 1;
      }
    }
    else {
      results[88] = 2;
    }
  }
  else {
    results[88] = 3;
  }
  if (x[8] <= 0.0049999999) {
    if (x[7] <= 0.0949999988) {
      if (x[11] <= 22.5000000000) {
        results[89] = 0;
      }
      else {
        results[89] = 1;
      }
    }
    else {
      results[89] = 3;
    }
  }
  else {
    results[89] = 2;
  }
  if (x[0] <= 0.0849999990) {
    if (x[0] <= 0.0199999996) {
      results[90] = 0;
    }
    else {
      if (x[10] <= 24.5000000000) {
        results[90] = 3;
      }
      else {
        results[90] = 1;
      }
    }
  }
  else {
    results[90] = 2;
  }
  if (x[9] <= 47.0000000000) {
    if (x[8] <= 0.0049999999) {
      if (x[0] <= 0.0250000004) {
        results[91] = 0;
      }
      else {
        results[91] = 3;
      }
    }
    else {
      results[91] = 2;
    }
  }
  else {
    results[91] = 1;
  }
  if (x[2] <= 0.0099999998) {
    results[92] = 0;
  }
  else {
    if (x[4] <= 0.0299999993) {
      if (x[7] <= 0.0900000036) {
        results[92] = 1;
      }
      else {
        results[92] = 3;
      }
    }
    else {
      results[92] = 2;
    }
  }
  if (x[8] <= 0.0049999999) {
    if (x[2] <= 0.1000000006) {
      if (x[6] <= 0.0049999999) {
        results[93] = 0;
      }
      else {
        results[93] = 1;
      }
    }
    else {
      results[93] = 3;
    }
  }
  else {
    results[93] = 2;
  }
  if (x[6] <= 0.0499999989) {
    if (x[7] <= 0.0949999988) {
      if (x[10] <= 9.0000000000) {
        results[94] = 0;
      }
      else {
        results[94] = 1;
      }
    }
    else {
      results[94] = 3;
    }
  }
  else {
    results[94] = 2;
  }
  if (x[9] <= 37.0000000000) {
    if (x[2] <= 0.0850000009) {
      results[95] = 0;
    }
    else {
      results[95] = 3;
    }
  }
  else {
    if (x[2] <= 0.0449999990) {
      results[95] = 1;
    }
    else {
      results[95] = 2;
    }
  }
  if (x[2] <= 0.1250000000) {
    if (x[8] <= 0.0049999999) {
      if (x[10] <= 9.0000000000) {
        results[96] = 0;
      }
      else {
        results[96] = 1;
      }
    }
    else {
      results[96] = 2;
    }
  }
  else {
    results[96] = 3;
  }
  if (x[9] <= 46.5000000000) {
    if (x[8] <= 0.0049999999) {
      if (x[9] <= 14.0000000000) {
        results[97] = 0;
      }
      else {
        results[97] = 3;
      }
    }
    else {
      results[97] = 2;
    }
  }
  else {
    results[97] = 1;
  }
  if (x[0] <= 0.0849999990) {
    if (x[7] <= 0.1000000015) {
      if (x[6] <= 0.0049999999) {
        results[98] = 0;
      }
      else {
        results[98] = 1;
      }
    }
    else {
      results[98] = 3;
    }
  }
  else {
    results[98] = 2;
  }
  if (x[9] <= 46.5000000000) {
    if (x[0] <= 0.0849999990) {
      if (x[7] <= 0.0949999988) {
        results[99] = 0;
      }
      else {
        results[99] = 3;
      }
    }
    else {
      results[99] = 2;
    }
  }
  else {
    results[99] = 1;
  }
  int classes_amount = 0;
  for(int i=0; i<100; i++){
  	if(results[i]+1 > classes_amount) classes_amount = results[i]+1;  }
  int result_class = -1;
  int max_apperance = 0;
  for(int i=0; i<classes_amount; i++){
   int apperance = 0;
  	for(int j=0; j<100; j++) if(results[j] == i) apperance++;
  	if(apperance > max_apperance){
  		max_apperance = apperance;
  		result_class = i;
  	}
  }
  return result_class;
}
