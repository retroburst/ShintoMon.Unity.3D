#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2151;
struct t2151_marshaled;

void t2151_marshal(const t2151& unmarshaled, t2151_marshaled& marshaled);
void t2151_marshal_back(const t2151_marshaled& marshaled, t2151& unmarshaled);
void t2151_marshal_cleanup(t2151_marshaled& marshaled);
