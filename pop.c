#include "monty.h"

/*
 * The function removes the top-most element in the stack
 * @top: defines the stack containing the elements
 */

stack_t *pop(stack_t *top)
{
    if(top == NULL)
    {
	    printf("L<line_number>: can't pop an empty stack\n");
	    return;
    }

    stack_t *prev_node = top->prev;
    free(top);
    prev_node->next = NULL;
    top = prev_node;

    return top;
}

