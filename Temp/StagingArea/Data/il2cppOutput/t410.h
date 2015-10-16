#pragma once
#include <stdint.h>
struct t410;
struct t411;
struct t412;
struct t413;
#include "t9.h"
struct  t410  : public t9
{
	bool f1;
	bool f2;
	t411 * f3;
	t411 * f4;
};
struct t410_SFs{
	t410 * f0;
	t412 * f5;
	t413 * f6;
	t413 * f7;
};
