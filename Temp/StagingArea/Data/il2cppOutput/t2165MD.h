#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2165;
struct t2165_marshaled;

void t2165_marshal(const t2165& unmarshaled, t2165_marshaled& marshaled);
void t2165_marshal_back(const t2165_marshaled& marshaled, t2165& unmarshaled);
void t2165_marshal_cleanup(t2165_marshaled& marshaled);
