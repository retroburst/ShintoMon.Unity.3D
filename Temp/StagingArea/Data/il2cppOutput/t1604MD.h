#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1604;
struct t1604_marshaled;

void t1604_marshal(const t1604& unmarshaled, t1604_marshaled& marshaled);
void t1604_marshal_back(const t1604_marshaled& marshaled, t1604& unmarshaled);
void t1604_marshal_cleanup(t1604_marshaled& marshaled);
