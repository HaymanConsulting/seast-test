//!STARTOFREGISTRYGENERATEDFILE 'RegistryPointers_Case09_Types.h'
//!
//! WARNING This file is generated automatically by the FAST registry.
//! Do not edit.  Your changes to this file will be lost.
//!

#ifndef _RegistryPointers_Case09_TYPES_H
#define _RegistryPointers_Case09_TYPES_H


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


  typedef struct RegistryPointers_Case09_InitInputType {
    void * object ;
    char InputFile[1024] ;
    float * p3DArray1 ;     int p3DArray1_Len ;
    float * p3DArray2 ;     int p3DArray2_Len ;
    float * twoDArray1 ;     int twoDArray1_Len ;
    float twoDArray2 ;[3] ;[2] ;
    float * twoDArray3 ;     int twoDArray3_Len ;
  } RegistryPointers_Case09_InitInputType_t ;
  typedef struct RegistryPointers_Case09_InitOutputType {
    void * object ;
    float * twoDArray4 ;     int twoDArray4_Len ;
    float * p3DArray3 ;     int p3DArray3_Len ;
  } RegistryPointers_Case09_InitOutputType_t ;
  typedef struct RegistryPointers_Case09_ContinuousStateType {
    void * object ;
    float DummyContState ;
  } RegistryPointers_Case09_ContinuousStateType_t ;
  typedef struct RegistryPointers_Case09_DiscreteStateType {
    void * object ;
    float DummyDiscState ;
  } RegistryPointers_Case09_DiscreteStateType_t ;
  typedef struct RegistryPointers_Case09_ConstraintStateType {
    void * object ;
    float DummyConstrState ;
  } RegistryPointers_Case09_ConstraintStateType_t ;
  typedef struct RegistryPointers_Case09_OtherStateType {
    void * object ;
    int DummyOtherState ;
  } RegistryPointers_Case09_OtherStateType_t ;
  typedef struct RegistryPointers_Case09_MiscVarType {
    void * object ;
    int DummyMiscVar ;
  } RegistryPointers_Case09_MiscVarType_t ;
  typedef struct RegistryPointers_Case09_ParameterType {
    void * object ;
    double DT ;
    float * p3DArray ;     int p3DArray_Len ;
  } RegistryPointers_Case09_ParameterType_t ;
  typedef struct RegistryPointers_Case09_InputType {
    void * object ;
    float DummyInput ;
  } RegistryPointers_Case09_InputType_t ;
  typedef struct RegistryPointers_Case09_OutputType {
    void * object ;
    float DummyOutput ;
  } RegistryPointers_Case09_OutputType_t ;
  typedef struct RegistryPointers_Case09_UserData {
    RegistryPointers_Case09_InitInputType_t RegistryPointers_Case09_InitInput ;
    RegistryPointers_Case09_InitOutputType_t RegistryPointers_Case09_InitOutput ;
    RegistryPointers_Case09_ContinuousStateType_t RegistryPointers_Case09_ContState ;
    RegistryPointers_Case09_DiscreteStateType_t RegistryPointers_Case09_DiscState ;
    RegistryPointers_Case09_ConstraintStateType_t RegistryPointers_Case09_ConstrState ;
    RegistryPointers_Case09_OtherStateType_t RegistryPointers_Case09_OtherState ;
    RegistryPointers_Case09_MiscVarType_t RegistryPointers_Case09_Misc ;
    RegistryPointers_Case09_ParameterType_t RegistryPointers_Case09_Param ;
    RegistryPointers_Case09_InputType_t RegistryPointers_Case09_Input ;
    RegistryPointers_Case09_OutputType_t RegistryPointers_Case09_Output ;
  } RegistryPointers_Case09_t ;

#endif // _RegistryPointers_Case09_TYPES_H


//!ENDOFREGISTRYGENERATEDFILE
