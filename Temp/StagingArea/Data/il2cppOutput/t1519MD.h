#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1519;
struct t1519_marshaled;

void t1519_marshal(const t1519& unmarshaled, t1519_marshaled& marshaled);
void t1519_marshal_back(const t1519_marshaled& marshaled, t1519& unmarshaled);
void t1519_marshal_cleanup(t1519_marshaled& marshaled);
