#include "monty.h"

/*
 * The function swap, swaps the last two elements of the stack
 * @top: defines a pointer to the last element of the stack
 * returns a stack with its last two elements swapped
 */

stack_t *swap(stack_t *top)
{
    if(top->prev == NULL)
    {
        printf("L<line_number>: can't swap, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack_t *prev_el = top->prev;

    top->next = prev_el;
    top->prev = prev_el->prev;

    prev_el->prev = top;
    prev_el->next = NULL;

    top = prev_el;

    return top;
}

