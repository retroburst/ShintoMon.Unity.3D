#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2161;
struct t2161_marshaled;

void t2161_marshal(const t2161& unmarshaled, t2161_marshaled& marshaled);
void t2161_marshal_back(const t2161_marshaled& marshaled, t2161& unmarshaled);
void t2161_marshal_cleanup(t2161_marshaled& marshaled);
