#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t727;
struct t727_marshaled;

void t727_marshal(const t727& unmarshaled, t727_marshaled& marshaled);
void t727_marshal_back(const t727_marshaled& marshaled, t727& unmarshaled);
void t727_marshal_cleanup(t727_marshaled& marshaled);
