#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t772;
struct t772_marshaled;

void t772_marshal(const t772& unmarshaled, t772_marshaled& marshaled);
void t772_marshal_back(const t772_marshaled& marshaled, t772& unmarshaled);
void t772_marshal_cleanup(t772_marshaled& marshaled);
