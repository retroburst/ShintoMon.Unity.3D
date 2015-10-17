#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t290;
struct t290_marshaled;

void t290_marshal(const t290& unmarshaled, t290_marshaled& marshaled);
void t290_marshal_back(const t290_marshaled& marshaled, t290& unmarshaled);
void t290_marshal_cleanup(t290_marshaled& marshaled);
