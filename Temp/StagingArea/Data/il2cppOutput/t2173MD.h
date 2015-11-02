#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2173;
struct t2173_marshaled;

void t2173_marshal(const t2173& unmarshaled, t2173_marshaled& marshaled);
void t2173_marshal_back(const t2173_marshaled& marshaled, t2173& unmarshaled);
void t2173_marshal_cleanup(t2173_marshaled& marshaled);
