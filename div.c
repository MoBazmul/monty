#include "monty.h"

/*
 * divide: This function divides the last two elements of the stack
 * and returns its result
 * @top: a pointer to the last element of the stack
 */

int divide(stack_t *top)
{
    if(top == NULL)
    {
        printf("L<line_number>: can't div, stack too short\n");
        exit(EXIT_FAILURE);
    }
    else if(top->n == 0)
    {
        printf("L<line_number>: division by zero\n");
        exit(EXIT_FAILURE);
    }

    stack_t *prev_el = top->prev;
    int result = prev_el->n / top->n;

    return result;
}

