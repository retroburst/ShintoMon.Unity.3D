#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1517;
struct t1517_marshaled;

void t1517_marshal(const t1517& unmarshaled, t1517_marshaled& marshaled);
void t1517_marshal_back(const t1517_marshaled& marshaled, t1517& unmarshaled);
void t1517_marshal_cleanup(t1517_marshaled& marshaled);
