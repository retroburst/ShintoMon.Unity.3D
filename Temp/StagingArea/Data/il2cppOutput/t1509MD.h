#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

struct t1509;
struct t1509_marshaled;

void t1509_marshal(const t1509& unmarshaled, t1509_marshaled& marshaled);
void t1509_marshal_back(const t1509_marshaled& marshaled, t1509& unmarshaled);
void t1509_marshal_cleanup(t1509_marshaled& marshaled);
