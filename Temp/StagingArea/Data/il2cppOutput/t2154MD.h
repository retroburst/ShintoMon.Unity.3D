#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2154;
struct t2154_marshaled;

void t2154_marshal(const t2154& unmarshaled, t2154_marshaled& marshaled);
void t2154_marshal_back(const t2154_marshaled& marshaled, t2154& unmarshaled);
void t2154_marshal_cleanup(t2154_marshaled& marshaled);
