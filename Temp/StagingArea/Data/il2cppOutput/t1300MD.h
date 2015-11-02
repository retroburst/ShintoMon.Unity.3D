#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1300;
struct t1300_marshaled;

extern "C" int32_t m5447 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5448 (t1300 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5449 (t1300 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5450 (t1300 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1300_marshal(const t1300& unmarshaled, t1300_marshaled& marshaled);
void t1300_marshal_back(const t1300_marshaled& marshaled, t1300& unmarshaled);
void t1300_marshal_cleanup(t1300_marshaled& marshaled);
