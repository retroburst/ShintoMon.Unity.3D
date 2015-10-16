#pragma once
#include <stdint.h>
struct t9;
struct t1404;
#include "t117.h"
#include "t911.h"
struct  t911 
{
	int32_t f0;
	int16_t f1;
	int16_t f2;
	uint8_t f3;
	uint8_t f4;
	uint8_t f5;
	uint8_t f6;
	uint8_t f7;
	uint8_t f8;
	uint8_t f9;
	uint8_t f10;
};
struct t911_SFs{
	t911  f11;
	t9 * f12;
	t1404 * f13;
	t1404 * f14;
};
