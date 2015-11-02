#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1528;
struct t1528_marshaled;

void t1528_marshal(const t1528& unmarshaled, t1528_marshaled& marshaled);
void t1528_marshal_back(const t1528_marshaled& marshaled, t1528& unmarshaled);
void t1528_marshal_cleanup(t1528_marshaled& marshaled);
