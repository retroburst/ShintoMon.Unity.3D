#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1343;
struct t1343_marshaled;

void t1343_marshal(const t1343& unmarshaled, t1343_marshaled& marshaled);
void t1343_marshal_back(const t1343_marshaled& marshaled, t1343& unmarshaled);
void t1343_marshal_cleanup(t1343_marshaled& marshaled);
