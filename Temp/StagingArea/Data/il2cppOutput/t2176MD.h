#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2176;
struct t2176_marshaled;

void t2176_marshal(const t2176& unmarshaled, t2176_marshaled& marshaled);
void t2176_marshal_back(const t2176_marshaled& marshaled, t2176& unmarshaled);
void t2176_marshal_cleanup(t2176_marshaled& marshaled);
