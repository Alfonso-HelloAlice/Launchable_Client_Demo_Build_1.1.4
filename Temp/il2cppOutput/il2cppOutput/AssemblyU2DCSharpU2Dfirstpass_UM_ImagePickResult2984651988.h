﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharpU2Dfirstpass_UM_BaseResult1340611101.h"

// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UM_ImagePickResult
struct  UM_ImagePickResult_t2984651988  : public UM_BaseResult_t1340611101
{
public:
	// UnityEngine.Texture2D UM_ImagePickResult::_image
	Texture2D_t3542995729 * ____image_1;

public:
	inline static int32_t get_offset_of__image_1() { return static_cast<int32_t>(offsetof(UM_ImagePickResult_t2984651988, ____image_1)); }
	inline Texture2D_t3542995729 * get__image_1() const { return ____image_1; }
	inline Texture2D_t3542995729 ** get_address_of__image_1() { return &____image_1; }
	inline void set__image_1(Texture2D_t3542995729 * value)
	{
		____image_1 = value;
		Il2CppCodeGenWriteBarrier(&____image_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
