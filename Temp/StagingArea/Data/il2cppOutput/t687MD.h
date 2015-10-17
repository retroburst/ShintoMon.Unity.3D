#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t687;
struct t687_marshaled;
struct t2;
struct t126;

extern "C" void m3148 (t687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3149 (t9 * __this , t687 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t687 * m3150 (t9 * __this , t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t687 * m3151 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t687 * m3152 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t687_marshal(const t687& unmarshaled, t687_marshaled& marshaled);
void t687_marshal_back(const t687_marshaled& marshaled, t687& unmarshaled);
void t687_marshal_cleanup(t687_marshaled& marshaled);
