#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1505;
struct t1505_marshaled;

void t1505_marshal(const t1505& unmarshaled, t1505_marshaled& marshaled);
void t1505_marshal_back(const t1505_marshaled& marshaled, t1505& unmarshaled);
void t1505_marshal_cleanup(t1505_marshaled& marshaled);
