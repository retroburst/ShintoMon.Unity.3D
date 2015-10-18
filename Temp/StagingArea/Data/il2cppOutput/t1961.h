#pragma once
#include <stdint.h>
struct t9;
struct t1100;
struct t1907;
struct t1904;
struct t560;
struct t1095;
struct t1962;
struct t1961;
#include "t9.h"
#include "t1967.h"
struct  t1961  : public t9
{
	uint8_t f0;
	t9 * f1;
	t9 * f2;
	int64_t f3;
	t1100 * f4;
	int64_t f5;
	t9 * f6;
	t9 * f7;
	t560 * f8;
	t1095* f9;
	t1962 * f10;
	t1962 * f11;
	t1961 * f12;
};
