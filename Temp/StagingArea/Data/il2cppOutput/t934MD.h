#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t934;
struct t934_marshaled;

void t934_marshal(const t934& unmarshaled, t934_marshaled& marshaled);
void t934_marshal_back(const t934_marshaled& marshaled, t934& unmarshaled);
void t934_marshal_cleanup(t934_marshaled& marshaled);
