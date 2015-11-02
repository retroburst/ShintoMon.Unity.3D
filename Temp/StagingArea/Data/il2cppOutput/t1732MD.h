#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1732;
struct t1732_marshaled;

void t1732_marshal(const t1732& unmarshaled, t1732_marshaled& marshaled);
void t1732_marshal_back(const t1732_marshaled& marshaled, t1732& unmarshaled);
void t1732_marshal_cleanup(t1732_marshaled& marshaled);
