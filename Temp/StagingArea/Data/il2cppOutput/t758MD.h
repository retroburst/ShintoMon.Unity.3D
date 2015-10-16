#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t758;
struct t758_marshaled;

void t758_marshal(const t758& unmarshaled, t758_marshaled& marshaled);
void t758_marshal_back(const t758_marshaled& marshaled, t758& unmarshaled);
void t758_marshal_cleanup(t758_marshaled& marshaled);
