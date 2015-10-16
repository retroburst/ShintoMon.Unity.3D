#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1717;
struct t1717_marshaled;

void t1717_marshal(const t1717& unmarshaled, t1717_marshaled& marshaled);
void t1717_marshal_back(const t1717_marshaled& marshaled, t1717& unmarshaled);
void t1717_marshal_cleanup(t1717_marshaled& marshaled);
