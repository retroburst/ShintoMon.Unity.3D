#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2152;
struct t2152_marshaled;

void t2152_marshal(const t2152& unmarshaled, t2152_marshaled& marshaled);
void t2152_marshal_back(const t2152_marshaled& marshaled, t2152& unmarshaled);
void t2152_marshal_cleanup(t2152_marshaled& marshaled);
