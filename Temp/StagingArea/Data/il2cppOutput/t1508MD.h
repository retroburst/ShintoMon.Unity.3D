#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1508;
struct t1508_marshaled;

void t1508_marshal(const t1508& unmarshaled, t1508_marshaled& marshaled);
void t1508_marshal_back(const t1508_marshaled& marshaled, t1508& unmarshaled);
void t1508_marshal_cleanup(t1508_marshaled& marshaled);
