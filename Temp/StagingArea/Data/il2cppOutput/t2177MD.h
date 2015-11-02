#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2177;
struct t2177_marshaled;

void t2177_marshal(const t2177& unmarshaled, t2177_marshaled& marshaled);
void t2177_marshal_back(const t2177_marshaled& marshaled, t2177& unmarshaled);
void t2177_marshal_cleanup(t2177_marshaled& marshaled);
