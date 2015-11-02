#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2175;
struct t2175_marshaled;

void t2175_marshal(const t2175& unmarshaled, t2175_marshaled& marshaled);
void t2175_marshal_back(const t2175_marshaled& marshaled, t2175& unmarshaled);
void t2175_marshal_cleanup(t2175_marshaled& marshaled);
