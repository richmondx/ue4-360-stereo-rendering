// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
#ifdef STEREOPANORAMA_StereoCapturePawn_generated_h
#error "StereoCapturePawn.generated.h already included, missing '#pragma once' in StereoCapturePawn.h"
#endif
#define STEREOPANORAMA_StereoCapturePawn_generated_h

#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateStereoAtlas) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateStereoAtlas) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAStereoCapturePawn(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_AStereoCapturePawn(); \
	public: \
	DECLARE_CLASS(AStereoCapturePawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(AStereoCapturePawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_INCLASS \
	private: \
	static void StaticRegisterNativesAStereoCapturePawn(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_AStereoCapturePawn(); \
	public: \
	DECLARE_CLASS(AStereoCapturePawn, ADefaultPawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(AStereoCapturePawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStereoCapturePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStereoCapturePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStereoCapturePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStereoCapturePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStereoCapturePawn(AStereoCapturePawn&&); \
	NO_API AStereoCapturePawn(const AStereoCapturePawn&); \
public:


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStereoCapturePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStereoCapturePawn(AStereoCapturePawn&&); \
	NO_API AStereoCapturePawn(const AStereoCapturePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStereoCapturePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStereoCapturePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStereoCapturePawn)


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_48_PROLOG
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_RPC_WRAPPERS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_INCLASS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Public_StereoCapturePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
