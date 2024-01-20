#include "monty.h"

/*
 * The push function adds a new element to the stack
 * @top: Defines the top data entered into the stack
 * @data: the actual data to be entered
 */

stack_t *push(stack_t *top, int data)
{
    stack *new = malloc(sizeof(stack_t));
    new->n = data;
    new->next = NULL;
    new->prev = NULL;

    if(top == NULL)
        top = new;
    else {
        top->next = new;
        new->next = NULL;
        new->prev = top;
        top = new;
    }

    return top;
}

