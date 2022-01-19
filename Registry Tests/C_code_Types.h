//!STARTOFREGISTRYGENERATEDFILE 'C_code_Types.h'
//!
//! WARNING This file is generated automatically by the FAST registry.
//! Do not edit.  Your changes to this file will be lost.
//!

#ifndef _C_code_TYPES_H
#define _C_code_TYPES_H


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


  typedef struct C_code_InitInputType {
    void * object ;
    char InputFile[1024] ;
    float * WaveVel ;     int WaveVel_Len ;
    float * pCurrVyi ;     int pCurrVyi_Len ;
  } C_code_InitInputType_t ;
  typedef struct C_code_InitOutputType {
    void * object ;
    float * WaveElevC0 ;     int WaveElevC0_Len ;
  } C_code_InitOutputType_t ;
  typedef struct C_code_ContinuousStateType {
    void * object ;
    float DummyContState ;
  } C_code_ContinuousStateType_t ;
  typedef struct C_code_DiscreteStateType {
    void * object ;
    float DummyDiscState ;
  } C_code_DiscreteStateType_t ;
  typedef struct C_code_ConstraintStateType {
    void * object ;
    float DummyConstrState ;
    float * pCurrVyi ;     int pCurrVyi_Len ;
  } C_code_ConstraintStateType_t ;
  typedef struct C_code_OtherStateType {
    void * object ;
    int DummyOtherState ;
  } C_code_OtherStateType_t ;
  typedef struct C_code_MiscVarType {
    void * object ;
    int DummyMiscVar ;
  } C_code_MiscVarType_t ;
  typedef struct C_code_ParameterType {
    void * object ;
    double DT ;
  } C_code_ParameterType_t ;
  typedef struct C_code_InputType {
    void * object ;
    float DummyInput ;
  } C_code_InputType_t ;
  typedef struct C_code_OutputType {
    void * object ;
    float DummyOutput ;
  } C_code_OutputType_t ;
  typedef struct C_code_UserData {
    C_code_InitInputType_t         C_code_InitInput ;
    C_code_InitOutputType_t        C_code_InitOutput ;
    C_code_ContinuousStateType_t   C_code_ContState ;
    C_code_DiscreteStateType_t     C_code_DiscState ;
    C_code_ConstraintStateType_t   C_code_ConstrState ;
    C_code_OtherStateType_t        C_code_OtherState ;
    C_code_MiscVarType_t           C_code_Misc ;
    C_code_ParameterType_t         C_code_Param ;
    C_code_InputType_t             C_code_Input ;
    C_code_OutputType_t            C_code_Output ;
  } C_code_t ;

#endif // _C_code_TYPES_H


//!ENDOFREGISTRYGENERATEDFILE
