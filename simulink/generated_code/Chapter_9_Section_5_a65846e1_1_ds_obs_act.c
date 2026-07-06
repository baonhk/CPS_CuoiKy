/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Chapter_9_Section_5/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_sys_struct.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_obs_act.h"
#include "Chapter_9_Section_5_a65846e1_1_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_externals.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Chapter_9_Section_5_a65846e1_1_ds_obs_act(const NeDynamicSystem *sys,
  const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T DC_Motor_v;
  DC_Motor_v = t1->mX.mX[2UL] * 0.954929658551372;
  out->mOBS_ACT.mX[0UL] = 0.0;
  out->mOBS_ACT.mX[1UL] = t1->mX.mX[3UL];
  out->mOBS_ACT.mX[2UL] = t1->mX.mX[3UL] * 0.2;
  out->mOBS_ACT.mX[3UL] = 0.0;
  out->mOBS_ACT.mX[4UL] = 0.0;
  out->mOBS_ACT.mX[5UL] = t1->mX.mX[3UL];
  out->mOBS_ACT.mX[6UL] = t1->mX.mX[3UL];
  out->mOBS_ACT.mX[7UL] = t1->mU.mX[0UL];
  out->mOBS_ACT.mX[8UL] = 0.0;
  out->mOBS_ACT.mX[9UL] = 0.0;
  out->mOBS_ACT.mX[10UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[11UL] = 1.0;
  out->mOBS_ACT.mX[12UL] = 0.0;
  out->mOBS_ACT.mX[13UL] = 0.0;
  out->mOBS_ACT.mX[14UL] = 0.0;
  out->mOBS_ACT.mX[15UL] = 1.0;
  out->mOBS_ACT.mX[16UL] = 0.0;
  out->mOBS_ACT.mX[17UL] = 0.0;
  out->mOBS_ACT.mX[18UL] = 0.0;
  out->mOBS_ACT.mX[19UL] = -0.0;
  out->mOBS_ACT.mX[20UL] = 0.0;
  out->mOBS_ACT.mX[21UL] = DC_Motor_v;
  out->mOBS_ACT.mX[22UL] = 0.0;
  out->mOBS_ACT.mX[23UL] = DC_Motor_v;
  out->mOBS_ACT.mX[24UL] = 0.0;
  out->mOBS_ACT.mX[25UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[26UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[27UL] = 0.0;
  out->mOBS_ACT.mX[28UL] = 0.0;
  out->mOBS_ACT.mX[29UL] = t1->mX.mX[3UL];
  out->mOBS_ACT.mX[30UL] = 0.0;
  out->mOBS_ACT.mX[31UL] = 0.0;
  out->mOBS_ACT.mX[32UL] = 0.0;
  out->mOBS_ACT.mX[33UL] = 0.0;
  out->mOBS_ACT.mX[34UL] = 0.0;
  out->mOBS_ACT.mX[35UL] = 0.0;
  out->mOBS_ACT.mX[36UL] = 0.0;
  out->mOBS_ACT.mX[37UL] = 0.0;
  out->mOBS_ACT.mX[38UL] = 0.0;
  out->mOBS_ACT.mX[39UL] = DC_Motor_v;
  out->mOBS_ACT.mX[40UL] = 0.0;
  out->mOBS_ACT.mX[41UL] = DC_Motor_v;
  out->mOBS_ACT.mX[42UL] = t1->mX.mX[0UL];
  out->mOBS_ACT.mX[43UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[44UL] = 0.0;
  out->mOBS_ACT.mX[45UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[46UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[47UL] = 0.0;
  out->mOBS_ACT.mX[48UL] = t1->mX.mX[1UL];
  out->mOBS_ACT.mX[49UL] = t1->mX.mX[2UL];
  out->mOBS_ACT.mX[50UL] = 0.0;
  out->mOBS_ACT.mX[51UL] = t1->mU.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}
