#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1350;
struct t1350_marshaled;

void t1350_marshal(const t1350& unmarshaled, t1350_marshaled& marshaled);
void t1350_marshal_back(const t1350_marshaled& marshaled, t1350& unmarshaled);
void t1350_marshal_cleanup(t1350_marshaled& marshaled);
