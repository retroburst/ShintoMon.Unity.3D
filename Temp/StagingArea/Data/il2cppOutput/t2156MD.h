#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2156;
struct t2156_marshaled;

void t2156_marshal(const t2156& unmarshaled, t2156_marshaled& marshaled);
void t2156_marshal_back(const t2156_marshaled& marshaled, t2156& unmarshaled);
void t2156_marshal_cleanup(t2156_marshaled& marshaled);
