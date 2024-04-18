#include "stack.h"

#include <stdlib.h>

#include <cstddef>
#include <cstring>

#include "global.h"

void initializeStack(Stack *ps) { ps->top = 0; }

void push(Stack *stack, void *data, size_t dataSize) {
  void *ptr = std::malloc(dataSize);
  std::memcpy(ptr, data, dataSize);
  stack->entry[stack->top] = ptr;
  stack->top++;
}

void pop(Stack *stack, void *poppedData, size_t dataSize) {
  stack->top--;
  std::memcpy(poppedData, stack->entry[stack->top], dataSize);
  free(stack->entry[stack->top]);
  stack->entry[stack->top] = nullptr;
}

void freeStack(Stack *stack) {
  for (int i = 0; i < stack->top; i++) {
    if (stack->entry[i] != nullptr) {
      free(stack->entry[i]);
      stack->entry[i] = nullptr;
    }
  }
  stack->top = 0;
}