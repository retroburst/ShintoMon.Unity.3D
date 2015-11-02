#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2164;
struct t2164_marshaled;

void t2164_marshal(const t2164& unmarshaled, t2164_marshaled& marshaled);
void t2164_marshal_back(const t2164_marshaled& marshaled, t2164& unmarshaled);
void t2164_marshal_cleanup(t2164_marshaled& marshaled);
