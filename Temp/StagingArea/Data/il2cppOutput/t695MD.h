#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t695;
struct t695_marshaled;

extern "C" void m3195 (t695 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3196 (t695 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3197 (t695 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3198 (t695 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t695_marshal(const t695& unmarshaled, t695_marshaled& marshaled);
void t695_marshal_back(const t695_marshaled& marshaled, t695& unmarshaled);
void t695_marshal_cleanup(t695_marshaled& marshaled);
