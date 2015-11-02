#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1525;
struct t1525_marshaled;

void t1525_marshal(const t1525& unmarshaled, t1525_marshaled& marshaled);
void t1525_marshal_back(const t1525_marshaled& marshaled, t1525& unmarshaled);
void t1525_marshal_cleanup(t1525_marshaled& marshaled);
