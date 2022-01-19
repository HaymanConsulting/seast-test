//!STARTOFREGISTRYGENERATEDFILE 'RegistryPointers_Case02_Types.h'
//!
//! WARNING This file is generated automatically by the FAST registry.
//! Do not edit.  Your changes to this file will be lost.
//!

#ifndef _RegistryPointers_Case02_TYPES_H
#define _RegistryPointers_Case02_TYPES_H


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


  typedef struct RegistryPointers_Case02_InitInputType {
    void * object ;
    char InputFile[1024] ;
  } RegistryPointers_Case02_InitInputType_t ;
  typedef struct RegistryPointers_Case02_InitOutputType {
    void * object ;
    float * twoDArray ;     int twoDArray_Len ;
  } RegistryPointers_Case02_InitOutputType_t ;
  typedef struct RegistryPointers_Case02_ContinuousStateType {
    void * object ;
    float DummyContState ;
  } RegistryPointers_Case02_ContinuousStateType_t ;
  typedef struct RegistryPointers_Case02_DiscreteStateType {
    void * object ;
    float DummyDiscState ;
  } RegistryPointers_Case02_DiscreteStateType_t ;
  typedef struct RegistryPointers_Case02_ConstraintStateType {
    void * object ;
    float DummyConstrState ;
  } RegistryPointers_Case02_ConstraintStateType_t ;
  typedef struct RegistryPointers_Case02_OtherStateType {
    void * object ;
    int DummyOtherState ;
  } RegistryPointers_Case02_OtherStateType_t ;
  typedef struct RegistryPointers_Case02_MiscVarType {
    void * object ;
    int DummyMiscVar ;
  } RegistryPointers_Case02_MiscVarType_t ;
  typedef struct RegistryPointers_Case02_ParameterType {
    void * object ;
    double DT ;
  } RegistryPointers_Case02_ParameterType_t ;
  typedef struct RegistryPointers_Case02_InputType {
    void * object ;
    float DummyInput ;
  } RegistryPointers_Case02_InputType_t ;
  typedef struct RegistryPointers_Case02_OutputType {
    void * object ;
    float DummyOutput ;
    float * p3DArray ;     int p3DArray_Len ;
  } RegistryPointers_Case02_OutputType_t ;
  typedef struct RegistryPointers_Case02_UserData {
    RegistryPointers_Case02_InitInputType_t RegistryPointers_Case02_InitInput ;
    RegistryPointers_Case02_InitOutputType_t RegistryPointers_Case02_InitOutput ;
    RegistryPointers_Case02_ContinuousStateType_t RegistryPointers_Case02_ContState ;
    RegistryPointers_Case02_DiscreteStateType_t RegistryPointers_Case02_DiscState ;
    RegistryPointers_Case02_ConstraintStateType_t RegistryPointers_Case02_ConstrState ;
    RegistryPointers_Case02_OtherStateType_t RegistryPointers_Case02_OtherState ;
    RegistryPointers_Case02_MiscVarType_t RegistryPointers_Case02_Misc ;
    RegistryPointers_Case02_ParameterType_t RegistryPointers_Case02_Param ;
    RegistryPointers_Case02_InputType_t RegistryPointers_Case02_Input ;
    RegistryPointers_Case02_OutputType_t RegistryPointers_Case02_Output ;
  } RegistryPointers_Case02_t ;

#endif // _RegistryPointers_Case02_TYPES_H


//!ENDOFREGISTRYGENERATEDFILE
