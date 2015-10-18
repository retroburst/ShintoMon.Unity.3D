#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t764;
struct t764_marshaled;
struct t2;

extern "C" bool m3808 (t764 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3809 (t764 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3810 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3811 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3812 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m3813 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3814 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3815 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3816 (t764 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t764_marshal(const t764& unmarshaled, t764_marshaled& marshaled);
void t764_marshal_back(const t764_marshaled& marshaled, t764& unmarshaled);
void t764_marshal_cleanup(t764_marshaled& marshaled);
