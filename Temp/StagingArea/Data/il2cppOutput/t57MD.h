#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t57;
struct t57_marshaled;
struct t2;
struct t131;
struct t126;
struct t9;
#include "t147.h"
#include "t13.h"
#include "t93.h"
#include "t58.h"

extern "C" void m3705 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t57 * m3706 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t57 * m3707 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t57 * m3708 (t9 * __this , t57 * p0, t13 * p1, t93 * p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m631 (t9 * __this , t57 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m614 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3709 (t9 * __this , t57 * p0, bool p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m492 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t131* m330 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m425 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m512 (t57 * __this, t2* p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m442 (t57 * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3710 (t9 * __this , t57 * p0, float p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m536 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t2* m648 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m645 (t57 * __this, t9 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m647 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3711 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m3712 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m510 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t58 m3713 (t57 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t57 * m535 (t9 * __this , t57 * p0, t13  p1, t93  p2, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m3714 (t9 * __this , t9 * p0, t2* p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t57 * m3715 (t9 * __this , t126 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m406 (t9 * __this , t57 * p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m333 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m332 (t9 * __this , t57 * p0, t57 * p1, MethodInfo* method) IL2CPP_METHOD_ATTR;
void t57_marshal(const t57& unmarshaled, t57_marshaled& marshaled);
void t57_marshal_back(const t57_marshaled& marshaled, t57& unmarshaled);
void t57_marshal_cleanup(t57_marshaled& marshaled);
