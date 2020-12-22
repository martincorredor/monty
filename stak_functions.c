#include "monty.h"

/**
  *add_node_stack - Adds a new element to stack
  *@stack: Node of the stack struct
  *@n: Content of the stack element
  */

void add_node_stack(Node_t *pila, char **token)
{
    int n;
    token[1] = n;
    Node *new_node = malloc(sizeof(Node));
    new_node->data = n;
    new_node->next = stack;
    stack = new_node;
    printf("Elemento: %d agregado correctamente", n);
}
