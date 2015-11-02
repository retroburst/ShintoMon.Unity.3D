#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2162;
struct t2162_marshaled;

void t2162_marshal(const t2162& unmarshaled, t2162_marshaled& marshaled);
void t2162_marshal_back(const t2162_marshaled& marshaled, t2162& unmarshaled);
void t2162_marshal_cleanup(t2162_marshaled& marshaled);
