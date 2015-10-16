#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2144;
struct t2144_marshaled;

void t2144_marshal(const t2144& unmarshaled, t2144_marshaled& marshaled);
void t2144_marshal_back(const t2144_marshaled& marshaled, t2144& unmarshaled);
void t2144_marshal_cleanup(t2144_marshaled& marshaled);
