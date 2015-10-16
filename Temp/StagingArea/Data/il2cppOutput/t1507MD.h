#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1507;
struct t1507_marshaled;

void t1507_marshal(const t1507& unmarshaled, t1507_marshaled& marshaled);
void t1507_marshal_back(const t1507_marshaled& marshaled, t1507& unmarshaled);
void t1507_marshal_cleanup(t1507_marshaled& marshaled);
