#include "lib/lib.h"
#include <stdio.h>
int main() {
  stack input_stack = create_stack();
  user_push(&input_stack);
  printf("%d\n", pop(&input_stack));
  printf("%d\n", peek(&input_stack));
  delete_stack(&input_stack);
  return 0;
}
