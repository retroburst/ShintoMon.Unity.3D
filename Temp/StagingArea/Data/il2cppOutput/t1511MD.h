#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1511;
struct t1511_marshaled;

void t1511_marshal(const t1511& unmarshaled, t1511_marshaled& marshaled);
void t1511_marshal_back(const t1511_marshaled& marshaled, t1511& unmarshaled);
void t1511_marshal_cleanup(t1511_marshaled& marshaled);
