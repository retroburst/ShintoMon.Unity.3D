#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t940;
struct t940_marshaled;

void t940_marshal(const t940& unmarshaled, t940_marshaled& marshaled);
void t940_marshal_back(const t940_marshaled& marshaled, t940& unmarshaled);
void t940_marshal_cleanup(t940_marshaled& marshaled);
