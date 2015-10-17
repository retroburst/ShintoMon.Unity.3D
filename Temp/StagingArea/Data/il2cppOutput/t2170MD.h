#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2170;
struct t2170_marshaled;

void t2170_marshal(const t2170& unmarshaled, t2170_marshaled& marshaled);
void t2170_marshal_back(const t2170_marshaled& marshaled, t2170& unmarshaled);
void t2170_marshal_cleanup(t2170_marshaled& marshaled);
