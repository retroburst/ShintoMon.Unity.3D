#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2153;
struct t2153_marshaled;

void t2153_marshal(const t2153& unmarshaled, t2153_marshaled& marshaled);
void t2153_marshal_back(const t2153_marshaled& marshaled, t2153& unmarshaled);
void t2153_marshal_cleanup(t2153_marshaled& marshaled);
