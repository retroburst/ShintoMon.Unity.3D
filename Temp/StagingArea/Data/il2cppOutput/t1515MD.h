#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1515;
struct t1515_marshaled;

void t1515_marshal(const t1515& unmarshaled, t1515_marshaled& marshaled);
void t1515_marshal_back(const t1515_marshaled& marshaled, t1515& unmarshaled);
void t1515_marshal_cleanup(t1515_marshaled& marshaled);
