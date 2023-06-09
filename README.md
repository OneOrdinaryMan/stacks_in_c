# Stacks in C
Stacks are __Last In First Out(LIFO)__ type data structures. Stacks are linked list based. Stacks have following methods,

- [ ] Peek
- [ ] Push
- [ ] Pop

## Stack data structure.
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
