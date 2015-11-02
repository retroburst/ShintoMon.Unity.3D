#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t292;
struct t292_marshaled;

void t292_marshal(const t292& unmarshaled, t292_marshaled& marshaled);
void t292_marshal_back(const t292_marshaled& marshaled, t292& unmarshaled);
void t292_marshal_cleanup(t292_marshaled& marshaled);
