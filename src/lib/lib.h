#ifndef LIB_H
#define LIB_H
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

stack create_stack();
node *create_node(int);
void push(stack *, int);
int peek(stack *);
int pop(stack *);
void delete_stack(stack *);
#endif
