#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1518;
struct t1518_marshaled;

void t1518_marshal(const t1518& unmarshaled, t1518_marshaled& marshaled);
void t1518_marshal_back(const t1518_marshaled& marshaled, t1518& unmarshaled);
void t1518_marshal_cleanup(t1518_marshaled& marshaled);
