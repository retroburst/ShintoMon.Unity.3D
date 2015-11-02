#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2169;
struct t2169_marshaled;

void t2169_marshal(const t2169& unmarshaled, t2169_marshaled& marshaled);
void t2169_marshal_back(const t2169_marshaled& marshaled, t2169& unmarshaled);
void t2169_marshal_cleanup(t2169_marshaled& marshaled);
