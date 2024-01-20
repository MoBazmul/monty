#include "monty.h"

/*
 * sub: This function returns the difference of the last two
 * elements of the stack
 * @top: A pointer to the last element of the stack
 */

int sub(stack_t *top)
{
    if(top == NULL)
    {
        printf("L<line_number>: can't sub, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack_t *prev_el = top->prev;

    return prev_el->n - top->n;
}

