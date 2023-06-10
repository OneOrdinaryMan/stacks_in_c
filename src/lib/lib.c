#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

typedef struct Node node;

typedef struct {
  node *head;
  int size;
} stack;

stack create_stack() {
  stack return_stack;
  return_stack.head = NULL;
  return_stack.size = 0;
  return return_stack;
}
node *create_node(int value) {
  node *return_node = malloc(sizeof(node));
  return_node->next = NULL;
  return_node->value = value;
  return return_node;
}
void push(stack *input_stack, int value) {
  node *current_head = input_stack->head;
  node *new_head = create_node(value);
  new_head->next = current_head;
  input_stack->head = new_head;
  input_stack->size++;
}
int peek(stack *input_stack) {
  if (input_stack->size == 0) {
    printf("The stack is empty.\n");
    return 0;
  }
  int return_value = input_stack->head->value;
  return return_value;
}
int pop(stack *input_stack) {
  if (input_stack->size == 0) {
    printf("Nothing to pop\n");
    return 0;
  }
  node *current_node = input_stack->head;
  node *next_node = current_node->next;
  input_stack->head = next_node;
  int return_value = current_node->value;
  free(current_node);
  input_stack->size--;
  return return_value;
}
void delete_stack(stack *input_stack) {
  while (input_stack->size > 0) {
    pop(input_stack);
  }
}
