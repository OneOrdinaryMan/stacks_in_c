#include "lib/lib.h"
#include <stdio.h>
int main() {
  stack input_stack = create_stack();
  push(&input_stack, 5);
  push(&input_stack, 6);
  push(&input_stack, 7);
  printf("%d\n", pop(&input_stack));
  printf("%d\n", peek(&input_stack));
  delete_stack(&input_stack);
  return 0;
}
