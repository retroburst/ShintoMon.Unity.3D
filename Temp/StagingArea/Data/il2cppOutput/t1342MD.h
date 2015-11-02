#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1342;
struct t1342_marshaled;

void t1342_marshal(const t1342& unmarshaled, t1342_marshaled& marshaled);
void t1342_marshal_back(const t1342_marshaled& marshaled, t1342& unmarshaled);
void t1342_marshal_cleanup(t1342_marshaled& marshaled);
