#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2168;
struct t2168_marshaled;

void t2168_marshal(const t2168& unmarshaled, t2168_marshaled& marshaled);
void t2168_marshal_back(const t2168_marshaled& marshaled, t2168& unmarshaled);
void t2168_marshal_cleanup(t2168_marshaled& marshaled);
