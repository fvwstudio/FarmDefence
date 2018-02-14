// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FARMDEFENCE_FDGameInstance_generated_h
#error "FDGameInstance.generated.h already included, missing '#pragma once' in FDGameInstance.h"
#endif
#define FARMDEFENCE_FDGameInstance_generated_h

#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_RPC_WRAPPERS
#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFDGameInstance(); \
	friend FARMDEFENCE_API class UClass* Z_Construct_UClass_UFDGameInstance(); \
public: \
	DECLARE_CLASS(UFDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FarmDefence"), NO_API) \
	DECLARE_SERIALIZER(UFDGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFDGameInstance(); \
	friend FARMDEFENCE_API class UClass* Z_Construct_UClass_UFDGameInstance(); \
public: \
	DECLARE_CLASS(UFDGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/FarmDefence"), NO_API) \
	DECLARE_SERIALIZER(UFDGameInstance) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFDGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFDGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFDGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFDGameInstance(UFDGameInstance&&); \
	NO_API UFDGameInstance(const UFDGameInstance&); \
public:


#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFDGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFDGameInstance(UFDGameInstance&&); \
	NO_API UFDGameInstance(const UFDGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFDGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFDGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFDGameInstance)


#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_12_PROLOG
#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_RPC_WRAPPERS \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_INCLASS \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FarmDefence_Source_FarmDefence_Public_FDGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FarmDefence_Source_FarmDefence_Public_FDGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
