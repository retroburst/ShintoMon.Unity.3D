#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1613;
struct t1613_marshaled;

void t1613_marshal(const t1613& unmarshaled, t1613_marshaled& marshaled);
void t1613_marshal_back(const t1613_marshaled& marshaled, t1613& unmarshaled);
void t1613_marshal_cleanup(t1613_marshaled& marshaled);
