//!STARTOFREGISTRYGENERATEDFILE 'Waves_Types.h'
//!
//! WARNING This file is generated automatically by the FAST registry.
//! Do not edit.  Your changes to this file will be lost.
//!

#ifndef _Waves_TYPES_H
#define _Waves_TYPES_H


#ifdef _WIN32 //define something for Windows (32-bit)
#  include "stdbool.h"
#  define CALL __declspec( dllexport )
#elif _WIN64 //define something for Windows (64-bit)
#  include "stdbool.h"
#  define CALL __declspec( dllexport ) 
#else
#  include <stdbool.h>
#  define CALL 
#endif


  typedef struct Waves_InitInputType {
    void * object ;
    char InputFile[1024] ;
    float * WaveVel ;     int WaveVel_Len ;
    float * pCurrVyi ;     int pCurrVyi_Len ;
  } Waves_InitInputType_t ;
  typedef struct Waves_InitOutputType {
    void * object ;
    float * WaveElevC0 ;     int WaveElevC0_Len ;
  } Waves_InitOutputType_t ;
  typedef struct Waves_ContinuousStateType {
    void * object ;
    float DummyContState ;
  } Waves_ContinuousStateType_t ;
  typedef struct Waves_DiscreteStateType {
    void * object ;
    float DummyDiscState ;
  } Waves_DiscreteStateType_t ;
  typedef struct Waves_ConstraintStateType {
    void * object ;
    float DummyConstrState ;
  } Waves_ConstraintStateType_t ;
  typedef struct Waves_OtherStateType {
    void * object ;
    int DummyOtherState ;
  } Waves_OtherStateType_t ;
  typedef struct Waves_MiscVarType {
    void * object ;
    int DummyMiscVar ;
  } Waves_MiscVarType_t ;
  typedef struct Waves_ParameterType {
    void * object ;
    double DT ;
  } Waves_ParameterType_t ;
  typedef struct Waves_InputType {
    void * object ;
    float DummyInput ;
  } Waves_InputType_t ;
  typedef struct Waves_OutputType {
    void * object ;
    float DummyOutput ;
  } Waves_OutputType_t ;
  typedef struct Waves_UserData {
    Waves_InitInputType_t          Waves_InitInput ;
    Waves_InitOutputType_t         Waves_InitOutput ;
    Waves_ContinuousStateType_t    Waves_ContState ;
    Waves_DiscreteStateType_t      Waves_DiscState ;
    Waves_ConstraintStateType_t    Waves_ConstrState ;
    Waves_OtherStateType_t         Waves_OtherState ;
    Waves_MiscVarType_t            Waves_Misc ;
    Waves_ParameterType_t          Waves_Param ;
    Waves_InputType_t              Waves_Input ;
    Waves_OutputType_t             Waves_Output ;
  } Waves_t ;

#endif // _Waves_TYPES_H


//!ENDOFREGISTRYGENERATEDFILE
