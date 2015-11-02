#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2174;
struct t2174_marshaled;

void t2174_marshal(const t2174& unmarshaled, t2174_marshaled& marshaled);
void t2174_marshal_back(const t2174_marshaled& marshaled, t2174& unmarshaled);
void t2174_marshal_cleanup(t2174_marshaled& marshaled);
