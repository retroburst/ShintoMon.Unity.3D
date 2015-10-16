#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1602;
struct t1602_marshaled;
#include "t1538.h"

extern "C" void m7861 (t1602 * __this, int32_t p0, uint8_t* p1, uint8_t* p2, uint8_t* p3, uint8_t* p4, uint8_t* p5, bool p6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1602_marshal(const t1602& unmarshaled, t1602_marshaled& marshaled);
void t1602_marshal_back(const t1602_marshaled& marshaled, t1602& unmarshaled);
void t1602_marshal_cleanup(t1602_marshaled& marshaled);
