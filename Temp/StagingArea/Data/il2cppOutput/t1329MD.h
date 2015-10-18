#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1329;
struct t1329_marshaled;
struct t2;

extern "C" void m5632 (t1329 * __this, t2* p0, t2* p1, int32_t p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t1329_marshal(const t1329& unmarshaled, t1329_marshaled& marshaled);
void t1329_marshal_back(const t1329_marshaled& marshaled, t1329& unmarshaled);
void t1329_marshal_cleanup(t1329_marshaled& marshaled);
