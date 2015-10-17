#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1084;
struct t1084_marshaled;

void t1084_marshal(const t1084& unmarshaled, t1084_marshaled& marshaled);
void t1084_marshal_back(const t1084_marshaled& marshaled, t1084& unmarshaled);
void t1084_marshal_cleanup(t1084_marshaled& marshaled);
