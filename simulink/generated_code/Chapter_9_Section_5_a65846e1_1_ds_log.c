/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'Chapter_9_Section_5/Solver Configuration'.
 */

#include "ne_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_sys_struct.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_log.h"
#include "Chapter_9_Section_5_a65846e1_1_ds.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_externals.h"
#include "Chapter_9_Section_5_a65846e1_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T Chapter_9_Section_5_a65846e1_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  real_T DC_Motor_v;
  DC_Motor_v = t1->mX.mX[2UL] * 0.954929658551372;
  out->mLOG.mX[0UL] = t1->mX.mX[3UL];
  out->mLOG.mX[1UL] = t1->mX.mX[3UL] * 0.2;
  out->mLOG.mX[2UL] = t1->mX.mX[3UL];
  out->mLOG.mX[3UL] = t1->mX.mX[3UL];
  out->mLOG.mX[4UL] = t1->mU.mX[0UL];
  out->mLOG.mX[5UL] = t1->mX.mX[2UL];
  out->mLOG.mX[6UL] = DC_Motor_v;
  out->mLOG.mX[7UL] = DC_Motor_v;
  out->mLOG.mX[8UL] = t1->mX.mX[2UL];
  out->mLOG.mX[9UL] = t1->mX.mX[2UL];
  out->mLOG.mX[10UL] = t1->mX.mX[3UL];
  out->mLOG.mX[11UL] = DC_Motor_v;
  out->mLOG.mX[12UL] = DC_Motor_v;
  out->mLOG.mX[13UL] = t1->mX.mX[0UL];
  out->mLOG.mX[14UL] = t1->mX.mX[1UL];
  out->mLOG.mX[15UL] = t1->mX.mX[2UL];
  out->mLOG.mX[16UL] = t1->mX.mX[2UL];
  out->mLOG.mX[17UL] = t1->mX.mX[1UL];
  out->mLOG.mX[18UL] = t1->mX.mX[2UL];
  out->mLOG.mX[19UL] = t1->mU.mX[0UL];
  (void)sys;
  (void)out;
  return 0;
}
