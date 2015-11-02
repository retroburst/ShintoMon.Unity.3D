#pragma once
#include <stdint.h>
struct t485;
struct t485_marshaled;
struct t727;
#include "t9.h"
#include "t58.h"
struct  t485  : public t9
{
	t58 f0;
};
struct t485_SFs{
	t485 * f1;
	t485 * f2;
	t727 * f3;
};
// Native definition for marshalling of: UnityEngine.Event
struct t485_marshaled
{
	t58 f0;
};
