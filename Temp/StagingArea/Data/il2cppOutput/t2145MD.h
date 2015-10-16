#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2145;
struct t2145_marshaled;

void t2145_marshal(const t2145& unmarshaled, t2145_marshaled& marshaled);
void t2145_marshal_back(const t2145_marshaled& marshaled, t2145& unmarshaled);
void t2145_marshal_cleanup(t2145_marshaled& marshaled);
