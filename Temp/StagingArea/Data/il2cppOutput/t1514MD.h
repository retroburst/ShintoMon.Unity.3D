#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1514;
struct t1514_marshaled;

void t1514_marshal(const t1514& unmarshaled, t1514_marshaled& marshaled);
void t1514_marshal_back(const t1514_marshaled& marshaled, t1514& unmarshaled);
void t1514_marshal_cleanup(t1514_marshaled& marshaled);
