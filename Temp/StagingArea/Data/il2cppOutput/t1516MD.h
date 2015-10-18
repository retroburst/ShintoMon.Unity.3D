#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1516;
struct t1516_marshaled;

void t1516_marshal(const t1516& unmarshaled, t1516_marshaled& marshaled);
void t1516_marshal_back(const t1516_marshaled& marshaled, t1516& unmarshaled);
void t1516_marshal_cleanup(t1516_marshaled& marshaled);
