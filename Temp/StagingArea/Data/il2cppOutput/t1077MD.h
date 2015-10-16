#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1077;
struct t1077_marshaled;

void t1077_marshal(const t1077& unmarshaled, t1077_marshaled& marshaled);
void t1077_marshal_back(const t1077_marshaled& marshaled, t1077& unmarshaled);
void t1077_marshal_cleanup(t1077_marshaled& marshaled);
