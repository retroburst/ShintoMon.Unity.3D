#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2166;
struct t2166_marshaled;

void t2166_marshal(const t2166& unmarshaled, t2166_marshaled& marshaled);
void t2166_marshal_back(const t2166_marshaled& marshaled, t2166& unmarshaled);
void t2166_marshal_cleanup(t2166_marshaled& marshaled);
