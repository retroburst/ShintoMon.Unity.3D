#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t686;
struct t686_marshaled;

extern "C" void m3712 (t686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t686_marshal(const t686& unmarshaled, t686_marshaled& marshaled);
void t686_marshal_back(const t686_marshaled& marshaled, t686& unmarshaled);
void t686_marshal_cleanup(t686_marshaled& marshaled);
