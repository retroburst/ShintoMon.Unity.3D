#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1230;
struct t1230_marshaled;
struct t2;
#include "t1236.h"

extern "C" void m5123 (t1230 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5124 (t1230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5125 (t1230 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5126 (t1230 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m5127 (t9 * __this , int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1230_marshal(const t1230& unmarshaled, t1230_marshaled& marshaled);
void t1230_marshal_back(const t1230_marshaled& marshaled, t1230& unmarshaled);
void t1230_marshal_cleanup(t1230_marshaled& marshaled);
