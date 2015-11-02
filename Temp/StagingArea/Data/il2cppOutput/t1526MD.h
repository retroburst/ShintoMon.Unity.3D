#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1526;
struct t1526_marshaled;

void t1526_marshal(const t1526& unmarshaled, t1526_marshaled& marshaled);
void t1526_marshal_back(const t1526_marshaled& marshaled, t1526& unmarshaled);
void t1526_marshal_cleanup(t1526_marshaled& marshaled);
