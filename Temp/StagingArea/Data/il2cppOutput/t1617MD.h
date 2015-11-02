#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1617;
struct t1617_marshaled;
#include "t1553.h"

extern "C" void m7931 (t1617 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1617_marshal(const t1617& unmarshaled, t1617_marshaled& marshaled);
void t1617_marshal_back(const t1617_marshaled& marshaled, t1617& unmarshaled);
void t1617_marshal_cleanup(t1617_marshaled& marshaled);
