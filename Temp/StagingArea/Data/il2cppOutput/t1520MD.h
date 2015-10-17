#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1520;
struct t1520_marshaled;

void t1520_marshal(const t1520& unmarshaled, t1520_marshaled& marshaled);
void t1520_marshal_back(const t1520_marshaled& marshaled, t1520& unmarshaled);
void t1520_marshal_cleanup(t1520_marshaled& marshaled);
