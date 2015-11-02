#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2163;
struct t2163_marshaled;

void t2163_marshal(const t2163& unmarshaled, t2163_marshaled& marshaled);
void t2163_marshal_back(const t2163_marshaled& marshaled, t2163& unmarshaled);
void t2163_marshal_cleanup(t2163_marshaled& marshaled);
