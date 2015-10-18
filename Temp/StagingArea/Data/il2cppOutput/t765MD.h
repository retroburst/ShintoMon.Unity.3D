#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t765;
struct t765_marshaled;

void t765_marshal(const t765& unmarshaled, t765_marshaled& marshaled);
void t765_marshal_back(const t765_marshaled& marshaled, t765& unmarshaled);
void t765_marshal_cleanup(t765_marshaled& marshaled);
