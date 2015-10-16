#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2146;
struct t2146_marshaled;

void t2146_marshal(const t2146& unmarshaled, t2146_marshaled& marshaled);
void t2146_marshal_back(const t2146_marshaled& marshaled, t2146& unmarshaled);
void t2146_marshal_cleanup(t2146_marshaled& marshaled);
