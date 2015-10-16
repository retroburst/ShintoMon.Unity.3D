#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2159;
struct t2159_marshaled;

void t2159_marshal(const t2159& unmarshaled, t2159_marshaled& marshaled);
void t2159_marshal_back(const t2159_marshaled& marshaled, t2159& unmarshaled);
void t2159_marshal_cleanup(t2159_marshaled& marshaled);
