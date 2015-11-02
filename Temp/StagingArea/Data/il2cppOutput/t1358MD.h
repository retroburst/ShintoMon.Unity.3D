#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1358;
struct t1358_marshaled;

void t1358_marshal(const t1358& unmarshaled, t1358_marshaled& marshaled);
void t1358_marshal_back(const t1358_marshaled& marshaled, t1358& unmarshaled);
void t1358_marshal_cleanup(t1358_marshaled& marshaled);
