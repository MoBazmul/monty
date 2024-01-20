#include "monty.h"

/*
 * The function add, sum up the last two elements in the stack
 * @top: defines the top-most element of the stack
 */

int add(stack_t *top)
{
    if(top == NULL)
    {
        fprintf(stderr, "L: can't add, stack too short\n");
	exit(EXIT_FAILURE);
    }

    stack_t *prev_el = top->prev;

    return prev_el->n + top->n;
}

