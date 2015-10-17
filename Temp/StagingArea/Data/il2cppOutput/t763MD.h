#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t763;
struct t763_marshaled;
struct t9;

extern "C" bool m4168 (t763 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m4169 (t763 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m4170 (t9 * __this , t763 * p0, t763 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t763_marshal(const t763& unmarshaled, t763_marshaled& marshaled);
void t763_marshal_back(const t763_marshaled& marshaled, t763& unmarshaled);
void t763_marshal_cleanup(t763_marshaled& marshaled);
