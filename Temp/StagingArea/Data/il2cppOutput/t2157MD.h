#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2157;
struct t2157_marshaled;

void t2157_marshal(const t2157& unmarshaled, t2157_marshaled& marshaled);
void t2157_marshal_back(const t2157_marshaled& marshaled, t2157& unmarshaled);
void t2157_marshal_cleanup(t2157_marshaled& marshaled);
