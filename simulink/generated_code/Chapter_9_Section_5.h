/*
 * Chapter_9_Section_5.h
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

#ifndef Chapter_9_Section_5_h_
#define Chapter_9_Section_5_h_
#ifndef Chapter_9_Section_5_COMMON_INCLUDES_
#define Chapter_9_Section_5_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "nesl_rtw.h"
#include "Chapter_9_Section_5_a65846e1_1_gateway.h"
#endif                                /* Chapter_9_Section_5_COMMON_INCLUDES_ */

#include "Chapter_9_Section_5_types.h"
#include <string.h>
#include "rtGetInf.h"
#include <float.h>
#include <math.h>
#include "rt_matrixlib.h"
#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMassMatrixIr
#define rtmGetMassMatrixIr(rtm)        ((rtm)->massMatrixIr)
#endif

#ifndef rtmSetMassMatrixIr
#define rtmSetMassMatrixIr(rtm, val)   ((rtm)->massMatrixIr = (val))
#endif

#ifndef rtmGetMassMatrixJc
#define rtmGetMassMatrixJc(rtm)        ((rtm)->massMatrixJc)
#endif

#ifndef rtmSetMassMatrixJc
#define rtmSetMassMatrixJc(rtm, val)   ((rtm)->massMatrixJc = (val))
#endif

#ifndef rtmGetMassMatrixNzMax
#define rtmGetMassMatrixNzMax(rtm)     ((rtm)->massMatrixNzMax)
#endif

#ifndef rtmSetMassMatrixNzMax
#define rtmSetMassMatrixNzMax(rtm, val) ((rtm)->massMatrixNzMax = (val))
#endif

#ifndef rtmGetMassMatrixPr
#define rtmGetMassMatrixPr(rtm)        ((rtm)->massMatrixPr)
#endif

#ifndef rtmSetMassMatrixPr
#define rtmSetMassMatrixPr(rtm, val)   ((rtm)->massMatrixPr = (val))
#endif

#ifndef rtmGetMassMatrixType
#define rtmGetMassMatrixType(rtm)      ((rtm)->massMatrixType)
#endif

#ifndef rtmSetMassMatrixType
#define rtmSetMassMatrixType(rtm, val) ((rtm)->massMatrixType = (val))
#endif

#ifndef rtmGetOdeDELTA
#define rtmGetOdeDELTA(rtm)            ((rtm)->odeDELTA)
#endif

#ifndef rtmSetOdeDELTA
#define rtmSetOdeDELTA(rtm, val)       ((rtm)->odeDELTA = (val))
#endif

#ifndef rtmGetOdeDFDX
#define rtmGetOdeDFDX(rtm)             ((rtm)->odeDFDX)
#endif

#ifndef rtmSetOdeDFDX
#define rtmSetOdeDFDX(rtm, val)        ((rtm)->odeDFDX = (val))
#endif

#ifndef rtmGetOdeE
#define rtmGetOdeE(rtm)                ((rtm)->odeE)
#endif

#ifndef rtmSetOdeE
#define rtmSetOdeE(rtm, val)           ((rtm)->odeE = (val))
#endif

#ifndef rtmGetOdeF0
#define rtmGetOdeF0(rtm)               ((rtm)->odeF0)
#endif

#ifndef rtmSetOdeF0
#define rtmSetOdeF0(rtm, val)          ((rtm)->odeF0 = (val))
#endif

#ifndef rtmGetOdeF1
#define rtmGetOdeF1(rtm)               ((rtm)->odeF1)
#endif

#ifndef rtmSetOdeF1
#define rtmSetOdeF1(rtm, val)          ((rtm)->odeF1 = (val))
#endif

#ifndef rtmGetOdeFAC
#define rtmGetOdeFAC(rtm)              ((rtm)->odeFAC)
#endif

#ifndef rtmSetOdeFAC
#define rtmSetOdeFAC(rtm, val)         ((rtm)->odeFAC = (val))
#endif

#ifndef rtmGetOdeMASSMATRIX_M
#define rtmGetOdeMASSMATRIX_M(rtm)     ((rtm)->odeMASSMATRIX_M)
#endif

#ifndef rtmSetOdeMASSMATRIX_M
#define rtmSetOdeMASSMATRIX_M(rtm, val) ((rtm)->odeMASSMATRIX_M = (val))
#endif

#ifndef rtmGetOdePIVOTS
#define rtmGetOdePIVOTS(rtm)           ((rtm)->odePIVOTS)
#endif

#ifndef rtmSetOdePIVOTS
#define rtmSetOdePIVOTS(rtm, val)      ((rtm)->odePIVOTS = (val))
#endif

#ifndef rtmGetOdeW
#define rtmGetOdeW(rtm)                ((rtm)->odeW)
#endif

#ifndef rtmSetOdeW
#define rtmSetOdeW(rtm, val)           ((rtm)->odeW = (val))
#endif

#ifndef rtmGetOdeX0
#define rtmGetOdeX0(rtm)               ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
#define rtmSetOdeX0(rtm, val)          ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetOdeX1START
#define rtmGetOdeX1START(rtm)          ((rtm)->odeX1START)
#endif

#ifndef rtmSetOdeX1START
#define rtmSetOdeX1START(rtm, val)     ((rtm)->odeX1START = (val))
#endif

#ifndef rtmGetOdeXTMP
#define rtmGetOdeXTMP(rtm)             ((rtm)->odeXTMP)
#endif

#ifndef rtmSetOdeXTMP
#define rtmSetOdeXTMP(rtm, val)        ((rtm)->odeXTMP = (val))
#endif

#ifndef rtmGetOdeZTMP
#define rtmGetOdeZTMP(rtm)             ((rtm)->odeZTMP)
#endif

#ifndef rtmSetOdeZTMP
#define rtmSetOdeZTMP(rtm, val)        ((rtm)->odeZTMP = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Gain1;                        /* '<Root>/Gain1' */
  real_T INPUT_1_1_1[4];               /* '<S6>/INPUT_1_1_1' */
  real_T STATE_1[5];                   /* '<S6>/STATE_1' */
  real_T OUTPUT_1_0;                   /* '<S6>/OUTPUT_1_0' */
} B_Chapter_9_Section_5_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_1_1_1_SimscapeInternalDis[2];/* '<S6>/INPUT_1_1_1' */
  real_T STATE_1_Discrete;             /* '<S6>/STATE_1' */
  real_T STATE_1_JacobElems;           /* '<S6>/STATE_1' */
  real_T STATE_1_ZcValueStore;         /* '<S6>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S6>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_JacobElems;        /* '<S6>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S6>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S6>/STATE_1' */
  void* STATE_1_SimData;               /* '<S6>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S6>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S6>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S6>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S6>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S6>/OUTPUT_1_0' */
  void* SINK_1_RtwLogger;              /* '<S6>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S6>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S6>/SINK_1' */
  void* SINK_1_InstRtwLogger;          /* '<S6>/SINK_1' */
  void* SINK_1_InstRtwLogBuffer;       /* '<S6>/SINK_1' */
  int_T STATE_1_Modes;                 /* '<S6>/STATE_1' */
  int_T STATE_1_SwtgCoeffs;            /* '<S6>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S6>/OUTPUT_1_0' */
  int_T OUTPUT_1_0_SwtgCoeffs;         /* '<S6>/OUTPUT_1_0' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S6>/STATE_1' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S6>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S6>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S6>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S6>/OUTPUT_1_0' */
  boolean_T STATE_1_FirstOutput;       /* '<S6>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S6>/OUTPUT_1_0' */
} DW_Chapter_9_Section_5_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Chapter_9_Section_5H_Bridgev_la[4];/* '<S6>/STATE_1' */
} X_Chapter_9_Section_5_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Chapter_9_Section_5H_Bridgev_la[4];/* '<S6>/STATE_1' */
} XDot_Chapter_9_Section_5_T;

/* State disabled  */
typedef struct {
  boolean_T Chapter_9_Section_5H_Bridgev_la[4];/* '<S6>/STATE_1' */
} XDis_Chapter_9_Section_5_T;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[2];
  int_T jc[5];
  real_T pr[2];
} MassMatrix_Chapter_9_Section__T;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Chapter_9_Section_5_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Chapter_9_Section_5_T;

/* Parameters (default storage) */
struct P_Chapter_9_Section_5_T_ {
  real_T Gain1_Gain;                   /* Expression: 1/255
                                        * Referenced by: '<Root>/Gain1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Chapter_9_Section_5_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;
  X_Chapter_9_Section_5_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis_Chapter_9_Section_5_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[4];
  real_T odeF0[4];
  real_T odeX1START[4];
  real_T odeF1[4];
  real_T odeDELTA[4];
  real_T odeE[4*4];
  real_T odeFAC[4];
  real_T odeDFDX[4*4];
  real_T odeW[4*4];
  int_T odePIVOTS[4];
  real_T odeXTMP[4];
  real_T odeZTMP[4];
  real_T odeMASSMATRIX_M[2];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    struct {
      uint8_T TID[2];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Chapter_9_Section_5_T Chapter_9_Section_5_P;

/* Block signals (default storage) */
extern B_Chapter_9_Section_5_T Chapter_9_Section_5_B;

/* Continuous states (default storage) */
extern X_Chapter_9_Section_5_T Chapter_9_Section_5_X;

/* Disabled states (default storage) */
extern XDis_Chapter_9_Section_5_T Chapter_9_Section_5_XDis;

/* Block states (default storage) */
extern DW_Chapter_9_Section_5_T Chapter_9_Section_5_DW;

/* global MassMatrix */
extern MassMatrix_Chapter_9_Section__T Chapter_9_Section_5_MassMatrix;

/* External inputs (root inport signals with default storage) */
extern ExtU_Chapter_9_Section_5_T Chapter_9_Section_5_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Chapter_9_Section_5_T Chapter_9_Section_5_Y;

/* Model entry point functions */
extern void Chapter_9_Section_5_initialize(void);
extern void Chapter_9_Section_5_step(void);
extern void Chapter_9_Section_5_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Chapter_9_Section_5_T *const Chapter_9_Section_5_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Chapter_9_Section_5'
 * '<S1>'   : 'Chapter_9_Section_5/PS-Simulink Converter'
 * '<S2>'   : 'Chapter_9_Section_5/Simulink-PS Converter'
 * '<S3>'   : 'Chapter_9_Section_5/Solver Configuration'
 * '<S4>'   : 'Chapter_9_Section_5/PS-Simulink Converter/EVAL_KEY'
 * '<S5>'   : 'Chapter_9_Section_5/Simulink-PS Converter/EVAL_KEY'
 * '<S6>'   : 'Chapter_9_Section_5/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* Chapter_9_Section_5_h_ */
