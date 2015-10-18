#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1726;
struct t1726_marshaled;

void t1726_marshal(const t1726& unmarshaled, t1726_marshaled& marshaled);
void t1726_marshal_back(const t1726_marshaled& marshaled, t1726& unmarshaled);
void t1726_marshal_cleanup(t1726_marshaled& marshaled);
