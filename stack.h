#ifndef STACK_H
#define STACK_H 1

#include <cstddef>

#include "global.h"

typedef struct stack {
  int top;
  void* entry[MAX_STACK];
} Stack;

void initializeStack(Stack*);
void push(Stack*, void*, size_t);
void pop(Stack*, void*, size_t);
void freeStack(Stack*);

#endif