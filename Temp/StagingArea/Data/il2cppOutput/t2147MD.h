#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2147;
struct t2147_marshaled;

void t2147_marshal(const t2147& unmarshaled, t2147_marshaled& marshaled);
void t2147_marshal_back(const t2147_marshaled& marshaled, t2147& unmarshaled);
void t2147_marshal_cleanup(t2147_marshaled& marshaled);
