#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1245;
struct t1245_marshaled;
struct t2;
#include "t1251.h"

extern "C" void m5193 (t1245 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5194 (t1245 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5195 (t1245 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5196 (t1245 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m5197 (t9 * __this , int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1245_marshal(const t1245& unmarshaled, t1245_marshaled& marshaled);
void t1245_marshal_back(const t1245_marshaled& marshaled, t1245& unmarshaled);
void t1245_marshal_cleanup(t1245_marshaled& marshaled);
