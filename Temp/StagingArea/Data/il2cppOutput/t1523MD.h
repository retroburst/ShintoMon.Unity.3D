#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1523;
struct t1523_marshaled;

void t1523_marshal(const t1523& unmarshaled, t1523_marshaled& marshaled);
void t1523_marshal_back(const t1523_marshaled& marshaled, t1523& unmarshaled);
void t1523_marshal_cleanup(t1523_marshaled& marshaled);
