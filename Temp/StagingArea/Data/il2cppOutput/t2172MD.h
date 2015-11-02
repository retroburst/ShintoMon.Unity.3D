#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2172;
struct t2172_marshaled;

void t2172_marshal(const t2172& unmarshaled, t2172_marshaled& marshaled);
void t2172_marshal_back(const t2172_marshaled& marshaled, t2172& unmarshaled);
void t2172_marshal_cleanup(t2172_marshaled& marshaled);
