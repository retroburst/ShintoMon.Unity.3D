#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t734;
struct t734_marshaled;

void t734_marshal(const t734& unmarshaled, t734_marshaled& marshaled);
void t734_marshal_back(const t734_marshaled& marshaled, t734& unmarshaled);
void t734_marshal_cleanup(t734_marshaled& marshaled);
