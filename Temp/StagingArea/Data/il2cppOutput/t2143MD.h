#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2143;
struct t2143_marshaled;

void t2143_marshal(const t2143& unmarshaled, t2143_marshaled& marshaled);
void t2143_marshal_back(const t2143_marshaled& marshaled, t2143& unmarshaled);
void t2143_marshal_cleanup(t2143_marshaled& marshaled);
