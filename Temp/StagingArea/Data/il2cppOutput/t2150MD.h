#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2150;
struct t2150_marshaled;

void t2150_marshal(const t2150& unmarshaled, t2150_marshaled& marshaled);
void t2150_marshal_back(const t2150_marshaled& marshaled, t2150& unmarshaled);
void t2150_marshal_cleanup(t2150_marshaled& marshaled);
