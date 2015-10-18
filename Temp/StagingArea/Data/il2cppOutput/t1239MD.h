#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1239;
struct t1239_marshaled;
struct t2;
#include "t1245.h"

extern "C" void m5152 (t1239 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5153 (t1239 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5154 (t1239 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5155 (t1239 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m5156 (t9 * __this , int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1239_marshal(const t1239& unmarshaled, t1239_marshaled& marshaled);
void t1239_marshal_back(const t1239_marshaled& marshaled, t1239& unmarshaled);
void t1239_marshal_cleanup(t1239_marshaled& marshaled);
