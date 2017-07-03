// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEREOPANORAMA_StereoStaticMeshComponent_generated_h
#error "StereoStaticMeshComponent.generated.h already included, missing '#pragma once' in StereoStaticMeshComponent.h"
#endif
#define STEREOPANORAMA_StereoStaticMeshComponent_generated_h

#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_RPC_WRAPPERS
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUStereoStaticMeshComponent(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_UStereoStaticMeshComponent(); \
	public: \
	DECLARE_CLASS(UStereoStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(UStereoStaticMeshComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_INCLASS \
	private: \
	static void StaticRegisterNativesUStereoStaticMeshComponent(); \
	friend STEREOPANORAMA_API class UClass* Z_Construct_UClass_UStereoStaticMeshComponent(); \
	public: \
	DECLARE_CLASS(UStereoStaticMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/StereoPanorama"), NO_API) \
	DECLARE_SERIALIZER(UStereoStaticMeshComponent) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoStaticMeshComponent(UStereoStaticMeshComponent&&); \
	NO_API UStereoStaticMeshComponent(const UStereoStaticMeshComponent&); \
public:


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoStaticMeshComponent(UStereoStaticMeshComponent&&); \
	NO_API UStereoStaticMeshComponent(const UStereoStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoStaticMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoStaticMeshComponent)


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_23_PROLOG
#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_RPC_WRAPPERS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_INCLASS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Experimental_StereoPanorama_Source_StereoPanorama_Private_StereoStaticMeshComponent_h


#define FOREACH_ENUM_ESPSTEREOCAMERALAYER(op) \
	op(ESPStereoCameraLayer::LeftEye) \
	op(ESPStereoCameraLayer::RightEye) \
	op(ESPStereoCameraLayer::BothEyes) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
