#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t756;
struct t756_marshaled;
struct t9;

extern "C" bool m4144 (t756 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4145 (t756 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4146 (t9 * __this , t756 * p0, t756 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t756_marshal(const t756& unmarshaled, t756_marshaled& marshaled);
void t756_marshal_back(const t756_marshaled& marshaled, t756& unmarshaled);
void t756_marshal_cleanup(t756_marshaled& marshaled);
