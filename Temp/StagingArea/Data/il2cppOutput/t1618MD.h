#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1618;
struct t1618_marshaled;

extern "C" void m7932 (t1618 * __this, bool p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1618_marshal(const t1618& unmarshaled, t1618_marshaled& marshaled);
void t1618_marshal_back(const t1618_marshaled& marshaled, t1618& unmarshaled);
void t1618_marshal_cleanup(t1618_marshaled& marshaled);
