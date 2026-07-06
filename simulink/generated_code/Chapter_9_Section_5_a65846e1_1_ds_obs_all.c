/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Chapter_9_Section_5/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_sys_struct.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_obs_all.h"
#include "Chapter_9_Section_5_a65846e1_1_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_externals.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Chapter_9_Section_5_a65846e1_1_ds_obs_all(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T DC_Motor_v;
  DC_Motor_v = t1->mX.mX[2UL] * 0.954929658551372;
  out->mOBS_ALL.mX[0UL] = 0.0;
  out->mOBS_ALL.mX[1UL] = t1->mX.mX[3UL];
  out->mOBS_ALL.mX[2UL] = t1->mX.mX[3UL] * 0.2;
  out->mOBS_ALL.mX[3UL] = 0.0;
  out->mOBS_ALL.mX[4UL] = 0.0;
  out->mOBS_ALL.mX[5UL] = t1->mX.mX[3UL];
  out->mOBS_ALL.mX[6UL] = t1->mX.mX[3UL];
  out->mOBS_ALL.mX[7UL] = t1->mU.mX[0UL];
  out->mOBS_ALL.mX[8UL] = 0.0;
  out->mOBS_ALL.mX[9UL] = 0.0;
  out->mOBS_ALL.mX[10UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[11UL] = 1.0;
  out->mOBS_ALL.mX[12UL] = 0.0;
  out->mOBS_ALL.mX[13UL] = 0.0;
  out->mOBS_ALL.mX[14UL] = 0.0;
  out->mOBS_ALL.mX[15UL] = 1.0;
  out->mOBS_ALL.mX[16UL] = 0.0;
  out->mOBS_ALL.mX[17UL] = 0.0;
  out->mOBS_ALL.mX[18UL] = 0.0;
  out->mOBS_ALL.mX[19UL] = -0.0;
  out->mOBS_ALL.mX[20UL] = 0.0;
  out->mOBS_ALL.mX[21UL] = DC_Motor_v;
  out->mOBS_ALL.mX[22UL] = 0.0;
  out->mOBS_ALL.mX[23UL] = DC_Motor_v;
  out->mOBS_ALL.mX[24UL] = 0.0;
  out->mOBS_ALL.mX[25UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[26UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[27UL] = 0.0;
  out->mOBS_ALL.mX[28UL] = 0.0;
  out->mOBS_ALL.mX[29UL] = t1->mX.mX[3UL];
  out->mOBS_ALL.mX[30UL] = 0.0;
  out->mOBS_ALL.mX[31UL] = 0.0;
  out->mOBS_ALL.mX[32UL] = 0.0;
  out->mOBS_ALL.mX[33UL] = 0.0;
  out->mOBS_ALL.mX[34UL] = 0.0;
  out->mOBS_ALL.mX[35UL] = 0.0;
  out->mOBS_ALL.mX[36UL] = 0.0;
  out->mOBS_ALL.mX[37UL] = 0.0;
  out->mOBS_ALL.mX[38UL] = 0.0;
  out->mOBS_ALL.mX[39UL] = DC_Motor_v;
  out->mOBS_ALL.mX[40UL] = 0.0;
  out->mOBS_ALL.mX[41UL] = DC_Motor_v;
  out->mOBS_ALL.mX[42UL] = t1->mX.mX[0UL];
  out->mOBS_ALL.mX[43UL] = t1->mX.mX[1UL];
  out->mOBS_ALL.mX[44UL] = 0.0;
  out->mOBS_ALL.mX[45UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[46UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[47UL] = 0.0;
  out->mOBS_ALL.mX[48UL] = t1->mX.mX[1UL];
  out->mOBS_ALL.mX[49UL] = t1->mX.mX[2UL];
  out->mOBS_ALL.mX[50UL] = 0.0;
  out->mOBS_ALL.mX[51UL] = t1->mU.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}
