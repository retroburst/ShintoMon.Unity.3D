#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2148;
struct t2148_marshaled;

void t2148_marshal(const t2148& unmarshaled, t2148_marshaled& marshaled);
void t2148_marshal_back(const t2148_marshaled& marshaled, t2148& unmarshaled);
void t2148_marshal_cleanup(t2148_marshaled& marshaled);
