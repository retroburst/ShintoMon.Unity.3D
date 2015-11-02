#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1619;
struct t1619_marshaled;

void t1619_marshal(const t1619& unmarshaled, t1619_marshaled& marshaled);
void t1619_marshal_back(const t1619_marshaled& marshaled, t1619& unmarshaled);
void t1619_marshal_cleanup(t1619_marshaled& marshaled);
