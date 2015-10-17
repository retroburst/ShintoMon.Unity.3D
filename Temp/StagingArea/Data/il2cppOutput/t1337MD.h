#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1337;
struct t1337_marshaled;

void t1337_marshal(const t1337& unmarshaled, t1337_marshaled& marshaled);
void t1337_marshal_back(const t1337_marshaled& marshaled, t1337& unmarshaled);
void t1337_marshal_cleanup(t1337_marshaled& marshaled);
