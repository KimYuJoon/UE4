// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "EngineMinimal.h"
DECLARE_LOG_CATEGORY_EXTERN(ArenaBattle, Log, All);
#define ABLOG_CALLINFO (FString(__FUNCTION__)+TEXT("(")+FString::FromInt(__LINE__)+TEXT(")")
#define ABLOG_S(Verbosity)UE_LOG(ArenaBattle,Vervosity,TEXT("%s"),*ABLOG_CALLINFO)
