# Stacks in C
***
Stacks are __Last In First Out(LIFO)__ type data structures. Stacks are linked list based. Stacks have following methods,

- [x] Peek
- [x] Push
- [x] Pop

## Stack data structure.
***
The Stack will contain a bunch of nodes. Nodes will contain the value and the pointer to next node. The stack will contain the head pointer and the size of pointer.

__Pseudo Code__
```c
struct Node {
  int value;
  struct Node *next;
};
typedef struct Node node;
typedef struct {
  node *head;
  int size;
} stack;
```
## Peek function
***
The peek function does one simple thing.It returns the value of the head node without destroying it. If there is no nodes in the stack, it will return 0.

__Pseudo Code__
```c
int peek(stack *input_stack) {
  if (input_stack->size == 0) {
    printf("The stack is empty.\n");
    return 0;
  }
  int return_value = input_stack->head->value;
  return return_value;
}
```
## Push function
***
The push function inserts the node at the head of the stack. So, a new node is created the head of the previous node is saved in the next of the new node and head of the stack
is changed to the address of the new node. The size of the stack is incremented.

__Pseudo Code__
```c
void push(stack *input_stack, int value) {
  node *current_head = input_stack->head;
  node *new_head = create_node(value);
  new_head->next = current_head;
  input_stack->head = new_head;
  input_stack->size++;
}
```
## Pop function
***
The pop function removes the current head and replaces the head with the next node. It returns the value of the current head. The removed head is then freed.

__Pseudo Code__
```c
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
```
# Licence
***
This project is licensed under <mark>GPL.3.0 or later</mark> license. Feel free to use the code.
