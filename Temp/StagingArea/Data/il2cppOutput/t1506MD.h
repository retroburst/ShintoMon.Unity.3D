#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1506;
struct t1506_marshaled;

void t1506_marshal(const t1506& unmarshaled, t1506_marshaled& marshaled);
void t1506_marshal_back(const t1506_marshaled& marshaled, t1506& unmarshaled);
void t1506_marshal_cleanup(t1506_marshaled& marshaled);
