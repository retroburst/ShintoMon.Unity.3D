#pragma once
#include <stdint.h>
struct t9;
struct t821;
struct t1553;
#include "t9.h"
#include "t58.h"
struct  t286  : public t9
{
	void (*f0)();
	t58 f1;
	t9 * f2;
	t58 f3;
	t58 f4;
	t58 f5;
	t821 * f6;
	t821 * f7;
	t1553 * f8;
};
