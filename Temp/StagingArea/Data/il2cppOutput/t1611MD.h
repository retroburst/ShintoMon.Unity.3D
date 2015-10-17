#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1611;
struct t1611_marshaled;
#include "t1547.h"

extern "C" void m7889 (t1611 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1611_marshal(const t1611& unmarshaled, t1611_marshaled& marshaled);
void t1611_marshal_back(const t1611_marshaled& marshaled, t1611& unmarshaled);
void t1611_marshal_cleanup(t1611_marshaled& marshaled);
