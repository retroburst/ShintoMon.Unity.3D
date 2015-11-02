#pragma once
#include <stdint.h>
#include "t117.h"
#include "t910.h"
struct  t910 
{
	uint32_t f5;
	uint32_t f6;
	uint32_t f7;
	uint32_t f8;
};
struct t910_SFs{
	t910  f0;
	t910  f1;
	t910  f2;
	t910  f3;
	t910  f4;
};
