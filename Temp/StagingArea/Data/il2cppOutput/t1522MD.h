#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1522;
struct t1522_marshaled;

void t1522_marshal(const t1522& unmarshaled, t1522_marshaled& marshaled);
void t1522_marshal_back(const t1522_marshaled& marshaled, t1522& unmarshaled);
void t1522_marshal_cleanup(t1522_marshaled& marshaled);
