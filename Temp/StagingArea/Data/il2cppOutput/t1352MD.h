#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1352;
struct t1352_marshaled;

void t1352_marshal(const t1352& unmarshaled, t1352_marshaled& marshaled);
void t1352_marshal_back(const t1352_marshaled& marshaled, t1352& unmarshaled);
void t1352_marshal_cleanup(t1352_marshaled& marshaled);
