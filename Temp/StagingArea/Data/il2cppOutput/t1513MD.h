#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1513;
struct t1513_marshaled;

void t1513_marshal(const t1513& unmarshaled, t1513_marshaled& marshaled);
void t1513_marshal_back(const t1513_marshaled& marshaled, t1513& unmarshaled);
void t1513_marshal_cleanup(t1513_marshaled& marshaled);
