#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t141;
struct t141_marshaled;
#include "t28.h"
#include "t317.h"

extern "C" int32_t m2482 (t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t28  m391 (t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m1183 (t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t141_marshal(const t141& unmarshaled, t141_marshaled& marshaled);
void t141_marshal_back(const t141_marshaled& marshaled, t141& unmarshaled);
void t141_marshal_cleanup(t141_marshaled& marshaled);
