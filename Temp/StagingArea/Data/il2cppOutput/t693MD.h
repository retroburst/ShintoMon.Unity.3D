#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t693;
struct t693_marshaled;

extern "C" void m3751 (t693 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t693_marshal(const t693& unmarshaled, t693_marshaled& marshaled);
void t693_marshal_back(const t693_marshaled& marshaled, t693& unmarshaled);
void t693_marshal_cleanup(t693_marshaled& marshaled);
