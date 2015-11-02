#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t741;
struct t741_marshaled;

void t741_marshal(const t741& unmarshaled, t741_marshaled& marshaled);
void t741_marshal_back(const t741_marshaled& marshaled, t741& unmarshaled);
void t741_marshal_cleanup(t741_marshaled& marshaled);
