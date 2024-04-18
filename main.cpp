/**
 * @file main.cpp
 * @author abdullah zayed
 * @brief
 * @version 0.1
 * @date 2024-04-17
 *
 * @copyright Copyright (c) 2024
 *
 * This is the second smart solution to be my ADT generic.
 *
 * I try to make my ADT structure that i built with c to be generic,
 * by doing Entry of the structure is a void pointer.
 *
 */

#include <iostream>

#include "stack.h"

int main() {
  Stack s;
  initializeStack(&s);

  int value1 = 10;
  int value2 = 50;
  push(&s, (void*)&value1, sizeof(value1));
  push(&s, (void*)&value2, sizeof(value2));

  int poppedValue1 = 0;
  int poppedValue2 = 0;
  pop(&s, (void*)&poppedValue1, sizeof(poppedValue1));
  pop(&s, (void*)&poppedValue2, sizeof(poppedValue2));

  std::cout << "Item value: " << poppedValue1 << "\n";
  std::cout << "Item value: " << poppedValue2 << "\n";

  freeStack(&s);

  return 0;
}