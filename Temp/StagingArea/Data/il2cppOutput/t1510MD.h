#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1510;
struct t1510_marshaled;

void t1510_marshal(const t1510& unmarshaled, t1510_marshaled& marshaled);
void t1510_marshal_back(const t1510_marshaled& marshaled, t1510& unmarshaled);
void t1510_marshal_cleanup(t1510_marshaled& marshaled);
