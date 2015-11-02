#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1090;
struct t1090_marshaled;

void t1090_marshal(const t1090& unmarshaled, t1090_marshaled& marshaled);
void t1090_marshal_back(const t1090_marshaled& marshaled, t1090& unmarshaled);
void t1090_marshal_cleanup(t1090_marshaled& marshaled);
