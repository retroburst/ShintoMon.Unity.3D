#pragma once
#include <stdint.h>
struct t9;
#include "t9.h"
#include "t403.h"
struct  t3210  : public t9
{
	t403  f0;
	float f1;
	float f2;
	int32_t f3;
	t9 * f4;
	t403  f5;
};
