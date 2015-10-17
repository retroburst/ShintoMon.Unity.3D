#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1521;
struct t1521_marshaled;

void t1521_marshal(const t1521& unmarshaled, t1521_marshaled& marshaled);
void t1521_marshal_back(const t1521_marshaled& marshaled, t1521& unmarshaled);
void t1521_marshal_cleanup(t1521_marshaled& marshaled);
