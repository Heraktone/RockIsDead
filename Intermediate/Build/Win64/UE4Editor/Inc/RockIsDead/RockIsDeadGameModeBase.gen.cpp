// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RockIsDead/RockIsDeadGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRockIsDeadGameModeBase() {}
// Cross Module References
	ROCKISDEAD_API UClass* Z_Construct_UClass_ARockIsDeadGameModeBase_NoRegister();
	ROCKISDEAD_API UClass* Z_Construct_UClass_ARockIsDeadGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RockIsDead();
// End Cross Module References
	void ARockIsDeadGameModeBase::StaticRegisterNativesARockIsDeadGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARockIsDeadGameModeBase_NoRegister()
	{
		return ARockIsDeadGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARockIsDeadGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RockIsDead,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RockIsDeadGameModeBase.h" },
		{ "ModuleRelativePath", "RockIsDeadGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARockIsDeadGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::ClassParams = {
		&ARockIsDeadGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARockIsDeadGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARockIsDeadGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARockIsDeadGameModeBase, 2804769164);
	template<> ROCKISDEAD_API UClass* StaticClass<ARockIsDeadGameModeBase>()
	{
		return ARockIsDeadGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARockIsDeadGameModeBase(Z_Construct_UClass_ARockIsDeadGameModeBase, &ARockIsDeadGameModeBase::StaticClass, TEXT("/Script/RockIsDead"), TEXT("ARockIsDeadGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARockIsDeadGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
