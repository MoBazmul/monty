#include "monty.h"

/*
 * mul: This function multiplies the last two elements of the
 * stack, store the result in the second last element then
 * removes the last element
 * @top: a pointer to the last element of the stack
 */

int mul(stack_t *top)
{
    if(top == NULL)
    {
        printf("L<line_number>: can't div, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack_t *prev_el = top->prev;
    int result = prev_el->n * top->n;
    prev_el->n = result;

    top = pop(top);

    return top->n;
}

