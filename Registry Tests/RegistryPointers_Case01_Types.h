//!STARTOFREGISTRYGENERATEDFILE 'RegistryPointers_Case01_Types.h'
//!
//! WARNING This file is generated automatically by the FAST registry.
//! Do not edit.  Your changes to this file will be lost.
//!

#ifndef _RegistryPointers_Case01_TYPES_H
#define _RegistryPointers_Case01_TYPES_H


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


  typedef struct RegistryPointers_Case01_InitInputType {
    void * object ;
    char InputFile[1024] ;
    float * p3DArray ;     int p3DArray_Len ;
    float * p1DArray ;     int p1DArray_Len ;
  } RegistryPointers_Case01_InitInputType_t ;
  typedef struct RegistryPointers_Case01_InitOutputType {
    void * object ;
    float * twoDArray ;     int twoDArray_Len ;
    float * p3DArray ;     int p3DArray_Len ;
  } RegistryPointers_Case01_InitOutputType_t ;
  typedef struct RegistryPointers_Case01_ContinuousStateType {
    void * object ;
    float DummyContState ;
  } RegistryPointers_Case01_ContinuousStateType_t ;
  typedef struct RegistryPointers_Case01_DiscreteStateType {
    void * object ;
    float DummyDiscState ;
  } RegistryPointers_Case01_DiscreteStateType_t ;
  typedef struct RegistryPointers_Case01_ConstraintStateType {
    void * object ;
    float DummyConstrState ;
  } RegistryPointers_Case01_ConstraintStateType_t ;
  typedef struct RegistryPointers_Case01_OtherStateType {
    void * object ;
    int DummyOtherState ;
  } RegistryPointers_Case01_OtherStateType_t ;
  typedef struct RegistryPointers_Case01_MiscVarType {
    void * object ;
    int DummyMiscVar ;
  } RegistryPointers_Case01_MiscVarType_t ;
  typedef struct RegistryPointers_Case01_ParameterType {
    void * object ;
    double DT ;
    float * p3DArray ;     int p3DArray_Len ;
  } RegistryPointers_Case01_ParameterType_t ;
  typedef struct RegistryPointers_Case01_InputType {
    void * object ;
    float DummyInput ;
  } RegistryPointers_Case01_InputType_t ;
  typedef struct RegistryPointers_Case01_OutputType {
    void * object ;
    float DummyOutput ;
  } RegistryPointers_Case01_OutputType_t ;
  typedef struct RegistryPointers_Case01_UserData {
    RegistryPointers_Case01_InitInputType_t RegistryPointers_Case01_InitInput ;
    RegistryPointers_Case01_InitOutputType_t RegistryPointers_Case01_InitOutput ;
    RegistryPointers_Case01_ContinuousStateType_t RegistryPointers_Case01_ContState ;
    RegistryPointers_Case01_DiscreteStateType_t RegistryPointers_Case01_DiscState ;
    RegistryPointers_Case01_ConstraintStateType_t RegistryPointers_Case01_ConstrState ;
    RegistryPointers_Case01_OtherStateType_t RegistryPointers_Case01_OtherState ;
    RegistryPointers_Case01_MiscVarType_t RegistryPointers_Case01_Misc ;
    RegistryPointers_Case01_ParameterType_t RegistryPointers_Case01_Param ;
    RegistryPointers_Case01_InputType_t RegistryPointers_Case01_Input ;
    RegistryPointers_Case01_OutputType_t RegistryPointers_Case01_Output ;
  } RegistryPointers_Case01_t ;

#endif // _RegistryPointers_Case01_TYPES_H


//!ENDOFREGISTRYGENERATEDFILE
