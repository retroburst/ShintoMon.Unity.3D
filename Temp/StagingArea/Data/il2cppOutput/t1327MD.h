#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1327;
struct t1327_marshaled;

void t1327_marshal(const t1327& unmarshaled, t1327_marshaled& marshaled);
void t1327_marshal_back(const t1327_marshaled& marshaled, t1327& unmarshaled);
void t1327_marshal_cleanup(t1327_marshaled& marshaled);
