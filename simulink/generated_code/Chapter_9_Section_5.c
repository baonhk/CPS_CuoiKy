/*
 * Chapter_9_Section_5.c
 *
 * Trial License - for use to evaluate programs for possible purchase as
 * an end-user only.
 *
 * Code generation for model "Chapter_9_Section_5".
 *
 * Model version              : 1.7
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Sun Jun 14 03:42:36 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Chapter_9_Section_5.h"
#include "rtwtypes.h"
#include <stddef.h>
#include "Chapter_9_Section_5_private.h"
#include <string.h>

/* Block signals (default storage) */
B_Chapter_9_Section_5_T Chapter_9_Section_5_B;

/* Continuous states */
X_Chapter_9_Section_5_T Chapter_9_Section_5_X;

/* Disabled State Vector */
XDis_Chapter_9_Section_5_T Chapter_9_Section_5_XDis;

/* Block states (default storage) */
DW_Chapter_9_Section_5_T Chapter_9_Section_5_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Chapter_9_Section_5_T Chapter_9_Section_5_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Chapter_9_Section_5_T Chapter_9_Section_5_Y;

/* Mass Matrices */
MassMatrix_Chapter_9_Section__T Chapter_9_Section_5_MassMatrix;

/* Real-time model */
static RT_MODEL_Chapter_9_Section_5_T Chapter_9_Section_5_M_;
RT_MODEL_Chapter_9_Section_5_T *const Chapter_9_Section_5_M =
  &Chapter_9_Section_5_M_;

/* ForcingFunction for root system: '<Root>' */
void Chapter_9_Section_5_forcingfunction(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_Chapter_9_Section_5_T *_rtXdot;
  char *msg;
  real_T tmp_0[4];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[2];
  boolean_T tmp;
  _rtXdot = ((XDot_Chapter_9_Section_5_T *) Chapter_9_Section_5_M->derivs);

  /* ForcingFunction for SimscapeExecutionBlock: '<S6>/STATE_1' */
  simulationData = (NeslSimulationData *)Chapter_9_Section_5_DW.STATE_1_SimData;
  time = Chapter_9_Section_5_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX =
    &Chapter_9_Section_5_X.Chapter_9_Section_5H_Bridgev_la[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Chapter_9_Section_5_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 1;
  simulationData->mData->mModeVector.mX = &Chapter_9_Section_5_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Chapter_9_Section_5_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Chapter_9_Section_5_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Chapter_9_Section_5_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Chapter_9_Section_5_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Chapter_9_Section_5_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
  tmp_0[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
  tmp_0[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
  tmp_0[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->Chapter_9_Section_5H_Bridgev_la[0];
  diagnosticManager = (NeuDiagnosticManager *)
    Chapter_9_Section_5_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    Chapter_9_Section_5_DW.STATE_1_Simulator, NESL_SIM_FORCINGFUNCTION,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
    }
  }

  /* End of ForcingFunction for SimscapeExecutionBlock: '<S6>/STATE_1' */
}

/* MassMatrix for root system: '<Root>' */
void Chapter_9_Section_5_massmatrix(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_0[4];
  real_T time;
  real_T *tmp_2;
  real_T *tmp_3;
  int32_T tmp_4;
  int_T tmp_1[2];
  boolean_T tmp;

  /* MassMatrix for SimscapeExecutionBlock: '<S6>/STATE_1' */
  simulationData = (NeslSimulationData *)Chapter_9_Section_5_DW.STATE_1_SimData;
  time = Chapter_9_Section_5_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX =
    &Chapter_9_Section_5_X.Chapter_9_Section_5H_Bridgev_la[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Chapter_9_Section_5_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 1;
  simulationData->mData->mModeVector.mX = &Chapter_9_Section_5_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Chapter_9_Section_5_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Chapter_9_Section_5_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Chapter_9_Section_5_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Chapter_9_Section_5_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Chapter_9_Section_5_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
  tmp_0[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
  tmp_0[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
  tmp_0[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  tmp_2 = Chapter_9_Section_5_M->massMatrixPr;
  tmp_3 = double_pointer_shift(tmp_2,
    Chapter_9_Section_5_DW.STATE_1_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 2;
  simulationData->mData->mMassMatrixPr.mX = tmp_3;
  diagnosticManager = (NeuDiagnosticManager *)
    Chapter_9_Section_5_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_4 = ne_simulator_method((NeslSimulator *)
    Chapter_9_Section_5_DW.STATE_1_Simulator, NESL_SIM_MASSMATRIX,
    simulationData, diagnosticManager);
  if (tmp_4 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
    }
  }

  /* End of MassMatrix for SimscapeExecutionBlock: '<S6>/STATE_1' */
}

void local_evaluateMassMatrix(RTWSolverInfo *si, real_T *Mdest )
{
  /* Refresh global mass matrix */
  Chapter_9_Section_5_massmatrix();

  /* Copy the mass matrix from system to the destination, if needed. */
  if (Mdest != rtsiGetSolverMassMatrixPr(si)) {
    real_T *Msrc = rtsiGetSolverMassMatrixPr(si);
    int_T nzmax = rtsiGetSolverMassMatrixNzMax(si);
    (void) memcpy(Mdest, Msrc,
                  (uint_T)nzmax*sizeof(real_T));
  }
}

/* Simplified version of numjac.cpp, for use with RTW. */
void local_numjac( RTWSolverInfo *si, real_T *y, const real_T *Fty, real_T *fac,
                  real_T *dFdy )
{
  /* constants */
  real_T THRESH = 1e-6;
  real_T EPS = 2.2e-16;                /* utGetEps(); */
  real_T BL = pow(EPS, 0.75);
  real_T BU = pow(EPS, 0.25);
  real_T FACMIN = pow(EPS, 0.78);
  real_T FACMAX = 0.1;
  int_T nx = 4;
  real_T *x = rtsiGetContStates(si);
  boolean_T *xdis = rtsiGetContStateDisabledPtr(si);
  real_T del;
  real_T difmax;
  real_T FdelRowmax;
  real_T temp;
  real_T Fdiff;
  real_T maybe;
  real_T xscale;
  real_T fscale;
  real_T *p;
  int_T rowmax;
  int_T i,j;
  if (x != y)
    (void) memcpy(x, y,
                  (uint_T)nx*sizeof(real_T));
  rtsiSetSolverComputingJacobian(si,true);
  for (p = dFdy, j = 0; j < nx; j++, p += nx) {
    /* Zero column j of dFdy if state j is currently disabled. */
    if (xdis[j]) {
      (void) memset(p, 0,
                    (uint_T)nx*sizeof(p[0]));
      continue;
    }

    /* Select an increment del for a difference approximation to
       column j of dFdy.  The vector fac accounts for experience
       gained in previous calls to numjac. */
    xscale = fabs(x[j]);
    if (xscale < THRESH)
      xscale = THRESH;
    temp = (x[j] + fac[j]*xscale);
    del = temp - y[j];
    while (del == 0.0) {
      if (fac[j] < FACMAX) {
        fac[j] *= 100.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
        temp = (x[j] + fac[j]*xscale);
        del = temp - x[j];
      } else {
        del = THRESH;                  /* thresh is nonzero */
        break;
      }
    }

    /* Keep del pointing into region. */
    if (Fty[j] >= 0.0)
      del = fabs(del);
    else
      del = -fabs(del);

    /* Form a difference approximation to column j of dFdy. */
    temp = x[j];
    x[j] += del;
    Chapter_9_Section_5_step();
    rtsiSetdX(si,p);
    Chapter_9_Section_5_forcingfunction();
    x[j] = temp;
    difmax = 0.0;
    rowmax = 0;
    FdelRowmax = p[0];
    temp = 1.0 / del;
    for (i = 0; i < nx; i++) {
      Fdiff = p[i] - Fty[i];
      maybe = fabs(Fdiff);
      if (maybe > difmax) {
        difmax = maybe;
        rowmax = i;
        FdelRowmax = p[i];
      }

      p[i] = temp * Fdiff;
    }

    /* Adjust fac for next call to numjac. */
    if (((FdelRowmax != 0.0) && (Fty[rowmax] != 0.0)) || (difmax == 0.0)) {
      fscale = fabs(FdelRowmax);
      if (fscale < fabs(Fty[rowmax]))
        fscale = fabs(Fty[rowmax]);
      if (difmax <= BL*fscale) {
        /* The difference is small, so increase the increment. */
        fac[j] *= 10.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
      } else if (difmax > BU*fscale) {
        /* The difference is large, so reduce the increment. */
        fac[j] *= 0.1;
        if (fac[j] < FACMIN)
          fac[j] = FACMIN;
      }
    }
  }

  rtsiSetSolverComputingJacobian(si,false);
}                                      /* end local_numjac */

/*
 * This function updates continuous states using the ODE14X fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static int_T rt_ODE14x_N[4] = { 12, 8, 6, 4 };

  time_T t0 = rtsiGetT(si);
  time_T t1 = t0;
  time_T h = rtsiGetStepSize(si);
  real_T *x1 = rtsiGetContStates(si);
  int_T order = rtsiGetSolverExtrapolationOrder(si);
  int_T numIter = rtsiGetSolverNumberNewtonIterations(si);
  ODE14X_IntgData *id = (ODE14X_IntgData *)rtsiGetSolverData(si);
  real_T *x0 = id->x0;
  real_T *f0 = id->f0;
  real_T *x1start = id->x1start;
  real_T *f1 = id->f1;
  real_T *Delta = id->Delta;
  real_T *E = id->E;
  real_T *fac = id->fac;
  real_T *dfdx = id->DFDX;
  real_T *W = id->W;
  int_T *pivots = id->pivots;
  real_T *xtmp = id->xtmp;
  real_T *ztmp = id->ztmp;
  boolean_T *xdis = rtsiGetContStateDisabledPtr(si);
  int_T *Mpattern_ir = rtsiGetSolverMassMatrixIr(si);
  int_T *Mpattern_jc = rtsiGetSolverMassMatrixJc(si);
  real_T *M = id->M;
  int_T col,row,rowidx;
  int_T *N = &(rt_ODE14x_N[0]);
  int_T i,j,k,iter;
  int_T nx = 4;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(x0, x1,
                (uint_T)nx*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  if (id->isFirstStep) {
    local_evaluateMassMatrix(si,M );
    id->isFirstStep = false;
  }

  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  Chapter_9_Section_5_forcingfunction();
  local_numjac(si,x0,f0,fac,dfdx );
  for (j = 0; j < order; j++) {
    real_T *p;
    real_T hN = h/N[j];

    /* Get the iteration matrix and solution at t0 */

    /* [L,U] = lu(M - hN*J) */
    (void) memcpy(W, dfdx,
                  (uint_T)nx*(uint_T)nx*sizeof(real_T));
    for (p = W, i = 0; i < nx*nx; i++, p++) {
      *p *= (-hN);
    }

    for (col = 0, p = W; col < nx; col++, p += nx) {
      if (xdis[col]) {
        (void) memset(p, 0,
                      (uint_T)nx*sizeof(p[0]));
        p[col] = 1.0;
      } else {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          p[row] += m_row_col;
        }
      }
    }

    rt_lu_real(W, nx,
               pivots);

    /* First Newton's iteration at t0. */
    /* rhs = hN*f0 */
    for (i = 0; i < nx; i++) {
      Delta[i] = hN*f0[i];
    }

    /* Delta = (U \ (L \ rhs)) */
    rt_ForwardSubstitutionRR_Dbl(W, Delta,
      f1, nx,
      1, pivots,
      1);
    rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
      Delta, nx,
      1, 0);

    /* ytmp = y0 + Delta
       ztmp = (ytmp-y0)/h
     */
    (void) memcpy(x1, x0,
                  (uint_T)nx*sizeof(real_T));
    for (i = 0; i < nx; i++) {
      x1[i] += Delta[i];
      ztmp[i] = Delta[i]/hN;
    }

    /* Additional Newton's iterations, if desired.
       for iter = 2:NewtIter
       rhs = hN*feval(odefun,tn,ytmp,extraArgs{:}) - M*(ytmp - yn);
       if statedepM   % only for state dep. Mdel ~= 0
       Mdel = M - feval(massfun,tn,ytmp);
       rhs = rhs + Mdel*ztmp*h;
       end
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       ztmp = (ytmp - yn)/h
       end
     */
    rtsiSetT(si, t0);
    rtsiSetdX(si, f1);
    for (iter = 1; iter < numIter; iter++) {
      Chapter_9_Section_5_step();
      Chapter_9_Section_5_forcingfunction();
      for (i = 0; i < nx; i++) {
        Delta[i] = hN*f1[i];
        xtmp[i] = x1[i] - x0[i];
      }

      /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= m_row_col*xtmp[col];
        }
      }

      rt_ForwardSubstitutionRR_Dbl(W, Delta,
        f1, nx,
        1, pivots,
        1);
      rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
        Delta, nx,
        1, 0);

      /* ytmp = ytmp + delta
         ztmp = (ytmp - yn)/h
       */
      for (i = 0; i < nx; i++) {
        x1[i] += Delta[i];
        ztmp[i] = (x1[i] - x0[i])/hN;
      }
    }

    /* Steps from t0+hN to t1 -- subintegration of N(j) steps for extrapolation
       ttmp = t0;
       for i = 2:N(j)
       ttmp = ttmp + hN
       ytmp0 = ytmp;
       for iter = 1:NewtIter
       rhs = (ytmp0 - ytmp) + hN*feval(odefun,ttmp,ytmp,extraArgs{:});
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       end
       end
     */
    for (k = 1; k < N[j]; k++) {
      t1 = t0 + k*hN;
      (void) memcpy(x1start, x1,
                    (uint_T)nx*sizeof(real_T));
      rtsiSetT(si, t1);
      rtsiSetdX(si, f1);
      for (iter = 0; iter < numIter; iter++) {
        Chapter_9_Section_5_step();
        Chapter_9_Section_5_forcingfunction();
        if (iter == 0) {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
          }
        } else {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
            xtmp[i] = (x1[i]-x1start[i]);
          }

          /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
          for (col = 0; col < nx; col++) {
            for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx
                 ++) {
              real_T m_row_col = M[rowidx];
              row = Mpattern_ir[rowidx];
              Delta[row] -= m_row_col*xtmp[col];
            }
          }
        }

        rt_ForwardSubstitutionRR_Dbl(W, Delta,
          f1, nx,
          1, pivots,
          1);
        rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
          Delta, nx,
          1, 0);

        /* ytmp = ytmp + Delta
           ztmp = (ytmp - ytmp0)/h
         */
        for (i = 0; i < nx; i++) {
          x1[i] += Delta[i];
          ztmp[i] = (x1[i] - x1start[i])/hN;
        }
      }
    }

    /* Extrapolate to order j
       E(:,j) = ytmp
       for k = j:-1:2
       coef = N(k-1)/(N(j) - N(k-1))
       E(:,k-1) = E(:,k) + coef*( E(:,k) - E(:,k-1) )
       end
     */
    (void) memcpy(&(E[nx*j]), x1,
                  (uint_T)nx*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = (real_T)(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        x1[i] = E[nx*k+i] + coef*(E[nx*k+i] - E[nx*(k-1)+i]);
      }

      (void) memcpy(&(E[nx*(k-1)]), x1,
                    (uint_T)nx*sizeof(real_T));
    }
  }

  /* x1 = E(:,1); */
  (void) memcpy(x1, E,
                (uint_T)nx*sizeof(real_T));

  /* t1 = t0 + h; */
  rtsiSetT(si,rtsiGetSolverStopTime(si));
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void Chapter_9_Section_5_step(void)
{
  if (rtmIsMajorTimeStep(Chapter_9_Section_5_M)) {
    /* set solver stop time */
    if (!(Chapter_9_Section_5_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&Chapter_9_Section_5_M->solverInfo,
                            ((Chapter_9_Section_5_M->Timing.clockTickH0 + 1) *
        Chapter_9_Section_5_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&Chapter_9_Section_5_M->solverInfo,
                            ((Chapter_9_Section_5_M->Timing.clockTick0 + 1) *
        Chapter_9_Section_5_M->Timing.stepSize0 +
        Chapter_9_Section_5_M->Timing.clockTickH0 *
        Chapter_9_Section_5_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(Chapter_9_Section_5_M)) {
    Chapter_9_Section_5_M->Timing.t[0] = rtsiGetT
      (&Chapter_9_Section_5_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T tmp_3[9];
    real_T tmp_0[4];
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T time_tmp;
    real_T time_tmp_0;
    int32_T tmp_2;
    int_T tmp_4[3];
    int_T tmp_1[2];
    boolean_T tmp;

    /* Gain: '<Root>/Gain1' incorporates:
     *  Inport: '<Root>/In1'
     */
    Chapter_9_Section_5_B.Gain1 = Chapter_9_Section_5_P.Gain1_Gain *
      Chapter_9_Section_5_U.In1;

    /* SimscapeInputBlock: '<S6>/INPUT_1_1_1' */
    Chapter_9_Section_5_B.INPUT_1_1_1[0] = Chapter_9_Section_5_B.Gain1;
    Chapter_9_Section_5_B.INPUT_1_1_1[1] = 0.0;
    Chapter_9_Section_5_B.INPUT_1_1_1[2] = 0.0;
    Chapter_9_Section_5_B.INPUT_1_1_1[3] = 0.0;

    /* SimscapeExecutionBlock: '<S6>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S6>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)
      Chapter_9_Section_5_DW.STATE_1_SimData;
    time_tmp = Chapter_9_Section_5_M->Timing.t[0];
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX =
      &Chapter_9_Section_5_X.Chapter_9_Section_5H_Bridgev_la[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Chapter_9_Section_5_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 1;
    simulationData->mData->mModeVector.mX =
      &Chapter_9_Section_5_DW.STATE_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Chapter_9_Section_5_DW.STATE_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Chapter_9_Section_5_DW.STATE_1_JacobElems;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (Chapter_9_Section_5_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&Chapter_9_Section_5_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&Chapter_9_Section_5_M->solverInfo);
    tmp_1[0] = 0;
    tmp_0[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
    tmp_0[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
    tmp_0[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
    tmp_0[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    simulationData->mData->mInputValues.mN = 4;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 2;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 5;
    simulationData->mData->mOutputs.mX = &Chapter_9_Section_5_B.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_tmp_0 = Chapter_9_Section_5_M->Timing.t[0];
    time_0 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Chapter_9_Section_5_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Chapter_9_Section_5_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S6>/STATE_1' */

    /* SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)
      Chapter_9_Section_5_DW.OUTPUT_1_0_SimData;
    time_1 = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Chapter_9_Section_5_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &Chapter_9_Section_5_DW.OUTPUT_1_0_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Chapter_9_Section_5_DW.OUTPUT_1_0_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Chapter_9_Section_5_DW.OUTPUT_1_0_JacobElems;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (Chapter_9_Section_5_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&Chapter_9_Section_5_M->solverInfo);
    tmp_4[0] = 0;
    tmp_3[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
    tmp_3[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
    tmp_3[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
    tmp_3[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = Chapter_9_Section_5_B.STATE_1[0];
    tmp_3[5] = Chapter_9_Section_5_B.STATE_1[1];
    tmp_3[6] = Chapter_9_Section_5_B.STATE_1[2];
    tmp_3[7] = Chapter_9_Section_5_B.STATE_1[3];
    tmp_3[8] = Chapter_9_Section_5_B.STATE_1[4];
    tmp_4[2] = 9;
    simulationData->mData->mInputValues.mN = 9;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 3;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 1;

    /* SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
    simulationData->mData->mOutputs.mX = &Chapter_9_Section_5_B.OUTPUT_1_0;

    /* SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_2 = time_tmp_0;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    diagnosticManager = (NeuDiagnosticManager *)
      Chapter_9_Section_5_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Chapter_9_Section_5_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
      if (tmp) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(Chapter_9_Section_5_M, msg_0);
      }
    }

    /* Outport: '<Root>/Out1' */
    Chapter_9_Section_5_Y.Out1 = Chapter_9_Section_5_B.OUTPUT_1_0;
  }

  if (rtmIsMajorTimeStep(Chapter_9_Section_5_M)) {
    /* Matfile logging */
    rt_UpdateTXYLogVars(Chapter_9_Section_5_M->rtwLogInfo,
                        (Chapter_9_Section_5_M->Timing.t));
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Chapter_9_Section_5_M)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0[4];
    real_T time;
    int32_T tmp_2;
    int_T tmp_1[2];
    boolean_T tmp;

    /* Update for SimscapeExecutionBlock: '<S6>/STATE_1' */
    simulationData = (NeslSimulationData *)
      Chapter_9_Section_5_DW.STATE_1_SimData;
    time = Chapter_9_Section_5_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 4;
    simulationData->mData->mContStates.mX =
      &Chapter_9_Section_5_X.Chapter_9_Section_5H_Bridgev_la[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &Chapter_9_Section_5_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 1;
    simulationData->mData->mModeVector.mX =
      &Chapter_9_Section_5_DW.STATE_1_Modes;
    simulationData->mData->mSwitchingCoeffs.mN = 0;
    simulationData->mData->mSwitchingCoeffs.mX =
      &Chapter_9_Section_5_DW.STATE_1_SwtgCoeffs;
    simulationData->mData->mJacobianElems.mN = 0;
    simulationData->mData->mJacobianElems.mX =
      &Chapter_9_Section_5_DW.STATE_1_JacobElems;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (Chapter_9_Section_5_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&Chapter_9_Section_5_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&Chapter_9_Section_5_M->solverInfo);
    tmp_1[0] = 0;
    tmp_0[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
    tmp_0[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
    tmp_0[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
    tmp_0[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
    tmp_1[1] = 4;
    simulationData->mData->mInputValues.mN = 4;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 2;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    diagnosticManager = (NeuDiagnosticManager *)
      Chapter_9_Section_5_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)
      Chapter_9_Section_5_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S6>/STATE_1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(Chapter_9_Section_5_M)) {
    /* signal main to stop simulation */
    {                                  /* Sample time: [0.0s, 0.0s] */
      if ((rtmGetTFinal(Chapter_9_Section_5_M)!=-1) &&
          !((rtmGetTFinal(Chapter_9_Section_5_M)-
             (((Chapter_9_Section_5_M->Timing.clockTick1+
                Chapter_9_Section_5_M->Timing.clockTickH1* 4294967296.0)) * 0.1))
            > (((Chapter_9_Section_5_M->Timing.clockTick1+
                 Chapter_9_Section_5_M->Timing.clockTickH1* 4294967296.0)) * 0.1)
            * (DBL_EPSILON))) {
        rtmSetErrorStatus(Chapter_9_Section_5_M, "Simulation finished");
      }
    }

    rt_ertODEUpdateContinuousStates(&Chapter_9_Section_5_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++Chapter_9_Section_5_M->Timing.clockTick0)) {
      ++Chapter_9_Section_5_M->Timing.clockTickH0;
    }

    Chapter_9_Section_5_M->Timing.t[0] = rtsiGetSolverStopTime
      (&Chapter_9_Section_5_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.1s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.1, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      Chapter_9_Section_5_M->Timing.clockTick1++;
      if (!Chapter_9_Section_5_M->Timing.clockTick1) {
        Chapter_9_Section_5_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void Chapter_9_Section_5_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_Chapter_9_Section_5_T *_rtXdot;
  char *msg;
  real_T tmp_0[4];
  real_T time;
  int32_T tmp_2;
  int_T tmp_1[2];
  boolean_T tmp;
  _rtXdot = ((XDot_Chapter_9_Section_5_T *) Chapter_9_Section_5_M->derivs);

  /* Derivatives for SimscapeExecutionBlock: '<S6>/STATE_1' */
  simulationData = (NeslSimulationData *)Chapter_9_Section_5_DW.STATE_1_SimData;
  time = Chapter_9_Section_5_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 4;
  simulationData->mData->mContStates.mX =
    &Chapter_9_Section_5_X.Chapter_9_Section_5H_Bridgev_la[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &Chapter_9_Section_5_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 1;
  simulationData->mData->mModeVector.mX = &Chapter_9_Section_5_DW.STATE_1_Modes;
  simulationData->mData->mSwitchingCoeffs.mN = 0;
  simulationData->mData->mSwitchingCoeffs.mX =
    &Chapter_9_Section_5_DW.STATE_1_SwtgCoeffs;
  simulationData->mData->mJacobianElems.mN = 0;
  simulationData->mData->mJacobianElems.mX =
    &Chapter_9_Section_5_DW.STATE_1_JacobElems;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (Chapter_9_Section_5_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&Chapter_9_Section_5_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&Chapter_9_Section_5_M->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = Chapter_9_Section_5_B.INPUT_1_1_1[0];
  tmp_0[1] = Chapter_9_Section_5_B.INPUT_1_1_1[1];
  tmp_0[2] = Chapter_9_Section_5_B.INPUT_1_1_1[2];
  tmp_0[3] = Chapter_9_Section_5_B.INPUT_1_1_1[3];
  tmp_1[1] = 4;
  simulationData->mData->mInputValues.mN = 4;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 2;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 4;
  simulationData->mData->mDx.mX = &_rtXdot->Chapter_9_Section_5H_Bridgev_la[0];
  diagnosticManager = (NeuDiagnosticManager *)
    Chapter_9_Section_5_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_2 = ne_simulator_method((NeslSimulator *)
    Chapter_9_Section_5_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES,
    simulationData, diagnosticManager);
  if (tmp_2 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S6>/STATE_1' */
}

/* Model initialize function */
void Chapter_9_Section_5_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)Chapter_9_Section_5_M, 0,
                sizeof(RT_MODEL_Chapter_9_Section_5_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Chapter_9_Section_5_M->solverInfo,
                          &Chapter_9_Section_5_M->Timing.simTimeStep);
    rtsiSetTPtr(&Chapter_9_Section_5_M->solverInfo, &rtmGetTPtr
                (Chapter_9_Section_5_M));
    rtsiSetStepSizePtr(&Chapter_9_Section_5_M->solverInfo,
                       &Chapter_9_Section_5_M->Timing.stepSize0);
    rtsiSetdXPtr(&Chapter_9_Section_5_M->solverInfo,
                 &Chapter_9_Section_5_M->derivs);
    rtsiSetContStatesPtr(&Chapter_9_Section_5_M->solverInfo, (real_T **)
                         &Chapter_9_Section_5_M->contStates);
    rtsiSetNumContStatesPtr(&Chapter_9_Section_5_M->solverInfo,
      &Chapter_9_Section_5_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&Chapter_9_Section_5_M->solverInfo,
      &Chapter_9_Section_5_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&Chapter_9_Section_5_M->solverInfo,
      &Chapter_9_Section_5_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&Chapter_9_Section_5_M->solverInfo,
      &Chapter_9_Section_5_M->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&Chapter_9_Section_5_M->solverInfo, (boolean_T**)
      &Chapter_9_Section_5_M->contStateDisabled);
    rtsiSetErrorStatusPtr(&Chapter_9_Section_5_M->solverInfo,
                          (&rtmGetErrorStatus(Chapter_9_Section_5_M)));
    rtsiSetSolverMassMatrixIr(&Chapter_9_Section_5_M->solverInfo,
      Chapter_9_Section_5_MassMatrix.ir);
    rtsiSetSolverMassMatrixJc(&Chapter_9_Section_5_M->solverInfo,
      Chapter_9_Section_5_MassMatrix.jc);
    rtsiSetSolverMassMatrixPr(&Chapter_9_Section_5_M->solverInfo,
      Chapter_9_Section_5_MassMatrix.pr);
    rtsiSetRTModelPtr(&Chapter_9_Section_5_M->solverInfo, Chapter_9_Section_5_M);
  }

  rtsiSetSimTimeStep(&Chapter_9_Section_5_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&Chapter_9_Section_5_M->solverInfo, false);
  rtsiSetIsContModeFrozen(&Chapter_9_Section_5_M->solverInfo, false);
  Chapter_9_Section_5_M->intgData.x0 = Chapter_9_Section_5_M->odeX0;
  Chapter_9_Section_5_M->intgData.f0 = Chapter_9_Section_5_M->odeF0;
  Chapter_9_Section_5_M->intgData.x1start = Chapter_9_Section_5_M->odeX1START;
  Chapter_9_Section_5_M->intgData.f1 = Chapter_9_Section_5_M->odeF1;
  Chapter_9_Section_5_M->intgData.Delta = Chapter_9_Section_5_M->odeDELTA;
  Chapter_9_Section_5_M->intgData.E = Chapter_9_Section_5_M->odeE;
  Chapter_9_Section_5_M->intgData.fac = Chapter_9_Section_5_M->odeFAC;

  /* initialize */
  {
    int_T i;
    real_T *f = Chapter_9_Section_5_M->intgData.fac;
    for (i = 0; i < (int_T)(sizeof(Chapter_9_Section_5_M->odeFAC)/sizeof(real_T));
         i++) {
      f[i] = 1.5e-8;
    }
  }

  Chapter_9_Section_5_M->intgData.DFDX = Chapter_9_Section_5_M->odeDFDX;
  Chapter_9_Section_5_M->intgData.W = Chapter_9_Section_5_M->odeW;
  Chapter_9_Section_5_M->intgData.pivots = Chapter_9_Section_5_M->odePIVOTS;
  Chapter_9_Section_5_M->intgData.xtmp = Chapter_9_Section_5_M->odeXTMP;
  Chapter_9_Section_5_M->intgData.ztmp = Chapter_9_Section_5_M->odeZTMP;
  Chapter_9_Section_5_M->intgData.M = Chapter_9_Section_5_M->odeMASSMATRIX_M;
  Chapter_9_Section_5_M->intgData.isFirstStep = true;
  rtsiSetSolverExtrapolationOrder(&Chapter_9_Section_5_M->solverInfo, 4);
  rtsiSetSolverNumberNewtonIterations(&Chapter_9_Section_5_M->solverInfo, 1);
  Chapter_9_Section_5_M->contStates = ((X_Chapter_9_Section_5_T *)
    &Chapter_9_Section_5_X);
  Chapter_9_Section_5_M->contStateDisabled = ((XDis_Chapter_9_Section_5_T *)
    &Chapter_9_Section_5_XDis);
  Chapter_9_Section_5_M->Timing.tStart = (0.0);
  Chapter_9_Section_5_M->massMatrixType = ((ssMatrixType)1);
  Chapter_9_Section_5_M->massMatrixNzMax = (2);
  Chapter_9_Section_5_M->massMatrixIr = (Chapter_9_Section_5_MassMatrix.ir);
  Chapter_9_Section_5_M->massMatrixJc = (Chapter_9_Section_5_MassMatrix.jc);
  Chapter_9_Section_5_M->massMatrixPr = (Chapter_9_Section_5_MassMatrix.pr);
  rtsiSetSolverMassMatrixType(&Chapter_9_Section_5_M->solverInfo, (ssMatrixType)
    1);
  rtsiSetSolverMassMatrixNzMax(&Chapter_9_Section_5_M->solverInfo, 2);
  rtsiSetSolverData(&Chapter_9_Section_5_M->solverInfo, (void *)
                    &Chapter_9_Section_5_M->intgData);
  rtsiSetSolverName(&Chapter_9_Section_5_M->solverInfo,"ode14x");
  rtmSetTPtr(Chapter_9_Section_5_M, &Chapter_9_Section_5_M->Timing.tArray[0]);
  rtmSetTFinal(Chapter_9_Section_5_M, 10.0);
  Chapter_9_Section_5_M->Timing.stepSize0 = 0.1;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Chapter_9_Section_5_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Chapter_9_Section_5_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Chapter_9_Section_5_M->rtwLogInfo, (NULL));
    rtliSetLogT(Chapter_9_Section_5_M->rtwLogInfo, "tout");
    rtliSetLogX(Chapter_9_Section_5_M->rtwLogInfo, "");
    rtliSetLogXFinal(Chapter_9_Section_5_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Chapter_9_Section_5_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Chapter_9_Section_5_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Chapter_9_Section_5_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Chapter_9_Section_5_M->rtwLogInfo, 1);
    rtliSetLogY(Chapter_9_Section_5_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Chapter_9_Section_5_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Chapter_9_Section_5_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Chapter_9_Section_5_B), 0,
                sizeof(B_Chapter_9_Section_5_T));

  /* states (continuous) */
  {
    (void) memset((void *)&Chapter_9_Section_5_X, 0,
                  sizeof(X_Chapter_9_Section_5_T));
  }

  /* disabled states */
  {
    (void) memset((void *)&Chapter_9_Section_5_XDis, 0,
                  sizeof(XDis_Chapter_9_Section_5_T));
  }

  /* global mass matrix */
  {
    int_T *ir = Chapter_9_Section_5_MassMatrix.ir;
    int_T *jc = Chapter_9_Section_5_MassMatrix.jc;
    real_T *pr = Chapter_9_Section_5_MassMatrix.pr;
    (void) memset((void *)ir, 0,
                  2*sizeof(int_T));
    (void) memset((void *)jc, 0,
                  (4+1)*sizeof(int_T));
    (void) memset((void *)pr, 0,
                  2*sizeof(real_T));
  }

  /* states (dwork) */
  (void) memset((void *)&Chapter_9_Section_5_DW, 0,
                sizeof(DW_Chapter_9_Section_5_T));

  /* external inputs */
  Chapter_9_Section_5_U.In1 = 0.0;

  /* external outputs */
  Chapter_9_Section_5_Y.Out1 = 0.0;

  /* Root-level init GlobalMassMatrixPr offset */
  {
    Chapter_9_Section_5_DW.STATE_1_MASS_MATRIX_PR = 0;/* '<S6>/STATE_1' */
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Chapter_9_Section_5_M->rtwLogInfo, 0.0,
    rtmGetTFinal(Chapter_9_Section_5_M), Chapter_9_Section_5_M->Timing.stepSize0,
    (&rtmGetErrorStatus(Chapter_9_Section_5_M)));

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T fixedStepSize;
    int32_T tmp_2;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S6>/STATE_1' */
    tmp = nesl_lease_simulator("Chapter_9_Section_5/Solver Configuration_1", 0,
      0);
    Chapter_9_Section_5_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Chapter_9_Section_5_DW.STATE_1_Simulator);
    if (tmp_0) {
      Chapter_9_Section_5_a65846e1_1_gateway();
      tmp = nesl_lease_simulator("Chapter_9_Section_5/Solver Configuration_1", 0,
        0);
      Chapter_9_Section_5_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Chapter_9_Section_5_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Chapter_9_Section_5_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.1;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ON;
    modelParameters.mRTWModifiedTimeStamp = 7.03102941E+8;
    modelParameters.mZcDisabled = true;
    modelParameters.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.1;
    }

    modelParameters.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Chapter_9_Section_5_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Chapter_9_Section_5_DW.STATE_1_Simulator, &modelParameters,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(Chapter_9_Section_5_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S6>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator("Chapter_9_Section_5/Solver Configuration_1", 1,
      0);
    Chapter_9_Section_5_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(Chapter_9_Section_5_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      Chapter_9_Section_5_a65846e1_1_gateway();
      tmp = nesl_lease_simulator("Chapter_9_Section_5/Solver Configuration_1", 1,
        0);
      Chapter_9_Section_5_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    Chapter_9_Section_5_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    Chapter_9_Section_5_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.1;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ON;
    modelParameters_0.mRTWModifiedTimeStamp = 7.03102941E+8;
    modelParameters_0.mZcDisabled = true;
    modelParameters_0.mUseModelRefSolver = false;
    tmp_0 = false;
    if (tmp_0) {
      fixedStepSize = (rtInf);
    } else {
      fixedStepSize = 0.1;
    }

    modelParameters_0.mFixedStepSize = fixedStepSize;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)
      Chapter_9_Section_5_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = nesl_initialize_simulator((NeslSimulator *)
      Chapter_9_Section_5_DW.OUTPUT_1_0_Simulator, &modelParameters_0,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(Chapter_9_Section_5_M));
      if (tmp_0) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(Chapter_9_Section_5_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
  }

  {
    int_T tmp_1;
    int_T tmp_2;
    int_T tmp_3;
    int_T tmp_4;
    int_T tmp_5;
    int_T tmp_6;
    boolean_T tmp;
    boolean_T tmp_0;

    /* InitializeConditions for SimscapeExecutionBlock: '<S6>/STATE_1' */
    tmp = false;
    tmp_0 = false;
    if (tmp_0 || tmp) {
      tmp_1 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "daessc");
      tmp_2 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "ode14x");
      tmp_3 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "ode15s");
      tmp_4 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "ode1be");
      tmp_5 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "ode23t");
      tmp_6 = strcmp(rtsiGetSolverName(&Chapter_9_Section_5_M->solverInfo),
                     "odeN");
      if ((boolean_T)((tmp_1 != 0) & (tmp_2 != 0) & (tmp_3 != 0) & (tmp_4 != 0)
                      & (tmp_5 != 0) & (tmp_6 != 0))) {
        rtmSetErrorStatus(Chapter_9_Section_5_M,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S6>/STATE_1' */

    /* Root-level InitSystemMatrices */
    {
      static int_T modelMassMatrixIr[2] = { 0, 1 };

      static int_T modelMassMatrixJc[5] = { 0, 1, 2, 2, 2 };

      static real_T modelMassMatrixPr[2] = { 1.0, 1.0 };

      (void) memcpy(Chapter_9_Section_5_MassMatrix.ir, modelMassMatrixIr,
                    2*sizeof(int_T));
      (void) memcpy(Chapter_9_Section_5_MassMatrix.jc, modelMassMatrixJc,
                    5*sizeof(int_T));
      (void) memcpy(Chapter_9_Section_5_MassMatrix.pr, modelMassMatrixPr,
                    2*sizeof(real_T));
    }
  }
}

/* Model terminate function */
void Chapter_9_Section_5_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S6>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Chapter_9_Section_5_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Chapter_9_Section_5_DW.STATE_1_SimData);
  nesl_erase_simulator("Chapter_9_Section_5/Solver Configuration_1");

  /* Terminate for SimscapeExecutionBlock: '<S6>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    Chapter_9_Section_5_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    Chapter_9_Section_5_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("Chapter_9_Section_5/Solver Configuration_1");
}
