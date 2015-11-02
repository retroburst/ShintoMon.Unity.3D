#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2158;
struct t2158_marshaled;

void t2158_marshal(const t2158& unmarshaled, t2158_marshaled& marshaled);
void t2158_marshal_back(const t2158_marshaled& marshaled, t2158& unmarshaled);
void t2158_marshal_cleanup(t2158_marshaled& marshaled);
