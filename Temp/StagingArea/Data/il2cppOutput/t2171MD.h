#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t2171;
struct t2171_marshaled;

void t2171_marshal(const t2171& unmarshaled, t2171_marshaled& marshaled);
void t2171_marshal_back(const t2171_marshaled& marshaled, t2171& unmarshaled);
void t2171_marshal_cleanup(t2171_marshaled& marshaled);
