#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2167;
struct t2167_marshaled;

void t2167_marshal(const t2167& unmarshaled, t2167_marshaled& marshaled);
void t2167_marshal_back(const t2167_marshaled& marshaled, t2167& unmarshaled);
void t2167_marshal_cleanup(t2167_marshaled& marshaled);
