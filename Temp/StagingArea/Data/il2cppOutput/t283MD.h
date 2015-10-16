#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t283;
struct t283_marshaled;

void t283_marshal(const t283& unmarshaled, t283_marshaled& marshaled);
void t283_marshal_back(const t283_marshaled& marshaled, t283& unmarshaled);
void t283_marshal_cleanup(t283_marshaled& marshaled);
