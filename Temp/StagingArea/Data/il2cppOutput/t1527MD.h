#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1527;
struct t1527_marshaled;

void t1527_marshal(const t1527& unmarshaled, t1527_marshaled& marshaled);
void t1527_marshal_back(const t1527_marshaled& marshaled, t1527& unmarshaled);
void t1527_marshal_cleanup(t1527_marshaled& marshaled);
