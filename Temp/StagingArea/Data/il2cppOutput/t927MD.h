#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t927;
struct t927_marshaled;

void t927_marshal(const t927& unmarshaled, t927_marshaled& marshaled);
void t927_marshal_back(const t927_marshaled& marshaled, t927& unmarshaled);
void t927_marshal_cleanup(t927_marshaled& marshaled);
