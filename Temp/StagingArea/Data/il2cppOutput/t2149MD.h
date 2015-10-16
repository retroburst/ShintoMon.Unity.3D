#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2149;
struct t2149_marshaled;

void t2149_marshal(const t2149& unmarshaled, t2149_marshaled& marshaled);
void t2149_marshal_back(const t2149_marshaled& marshaled, t2149& unmarshaled);
void t2149_marshal_cleanup(t2149_marshaled& marshaled);
