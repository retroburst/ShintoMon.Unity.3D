#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1524;
struct t1524_marshaled;

void t1524_marshal(const t1524& unmarshaled, t1524_marshaled& marshaled);
void t1524_marshal_back(const t1524_marshaled& marshaled, t1524& unmarshaled);
void t1524_marshal_cleanup(t1524_marshaled& marshaled);
