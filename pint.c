#include "monty.h"

/*
 * The function checks and return the top-most elemnt in the stack
 * @top: defines the stack
 */

void pint(stack_t *top)
{
    if(top == NULL)
    {
        printf("L<line_number>: can't pint, stack empty");
        return;
    }

    printf("%d\n", top->n);
}

