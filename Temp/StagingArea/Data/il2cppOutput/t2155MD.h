#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2155;
struct t2155_marshaled;

void t2155_marshal(const t2155& unmarshaled, t2155_marshaled& marshaled);
void t2155_marshal_back(const t2155_marshaled& marshaled, t2155& unmarshaled);
void t2155_marshal_cleanup(t2155_marshaled& marshaled);
