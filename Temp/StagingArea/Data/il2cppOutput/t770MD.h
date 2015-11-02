#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t770;
struct t770_marshaled;
struct t9;

extern "C" bool m4210 (t770 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4211 (t770 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4212 (t9 * __this , t770 * p0, t770 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t770_marshal(const t770& unmarshaled, t770_marshaled& marshaled);
void t770_marshal_back(const t770_marshaled& marshaled, t770& unmarshaled);
void t770_marshal_cleanup(t770_marshaled& marshaled);
