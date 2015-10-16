#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1341;
struct t1341_marshaled;

void t1341_marshal(const t1341& unmarshaled, t1341_marshaled& marshaled);
void t1341_marshal_back(const t1341_marshaled& marshaled, t1341& unmarshaled);
void t1341_marshal_cleanup(t1341_marshaled& marshaled);
