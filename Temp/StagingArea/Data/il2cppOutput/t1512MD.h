#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1512;
struct t1512_marshaled;

void t1512_marshal(const t1512& unmarshaled, t1512_marshaled& marshaled);
void t1512_marshal_back(const t1512_marshaled& marshaled, t1512& unmarshaled);
void t1512_marshal_cleanup(t1512_marshaled& marshaled);
