#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t679;
struct t679_marshaled;

extern "C" void m3687 (t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t679_marshal(const t679& unmarshaled, t679_marshaled& marshaled);
void t679_marshal_back(const t679_marshaled& marshaled, t679& unmarshaled);
void t679_marshal_cleanup(t679_marshaled& marshaled);
