#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1336;
struct t1336_marshaled;

void t1336_marshal(const t1336& unmarshaled, t1336_marshaled& marshaled);
void t1336_marshal_back(const t1336_marshaled& marshaled, t1336& unmarshaled);
void t1336_marshal_cleanup(t1336_marshaled& marshaled);
