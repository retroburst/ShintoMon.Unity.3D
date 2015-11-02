#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t771;
struct t771_marshaled;
struct t2;

extern "C" bool m3849 (t771 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3850 (t771 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3851 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3852 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m3853 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float m3854 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3855 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3856 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3857 (t771 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t771_marshal(const t771& unmarshaled, t771_marshaled& marshaled);
void t771_marshal_back(const t771_marshaled& marshaled, t771& unmarshaled);
void t771_marshal_cleanup(t771_marshaled& marshaled);
