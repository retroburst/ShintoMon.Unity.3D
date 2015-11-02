#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1356;
struct t1356_marshaled;

void t1356_marshal(const t1356& unmarshaled, t1356_marshaled& marshaled);
void t1356_marshal_back(const t1356_marshaled& marshaled, t1356& unmarshaled);
void t1356_marshal_cleanup(t1356_marshaled& marshaled);
