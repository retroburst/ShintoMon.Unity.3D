#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2160;
struct t2160_marshaled;

void t2160_marshal(const t2160& unmarshaled, t2160_marshaled& marshaled);
void t2160_marshal_back(const t2160_marshaled& marshaled, t2160& unmarshaled);
void t2160_marshal_cleanup(t2160_marshaled& marshaled);
