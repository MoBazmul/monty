#include "monty.h"

/*
 * The pall function prints all the data in the stack
 * @top: the top data in the stack
 */

void pall(stack_t *top) {
    if(top == NULL)
        return;

    while(top != NULL)
    {
        printf("%d\n", top->n);
        top = top->prev;
    }
}

