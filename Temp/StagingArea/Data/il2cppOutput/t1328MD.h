#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1328;
struct t1328_marshaled;

void t1328_marshal(const t1328& unmarshaled, t1328_marshaled& marshaled);
void t1328_marshal_back(const t1328_marshaled& marshaled, t1328& unmarshaled);
void t1328_marshal_cleanup(t1328_marshaled& marshaled);
