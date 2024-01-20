#include "monty.h"

/* modulus: This function gets the remainder of the division
 *  between the last two elements of the stack and stores the results 
 *  in the second last element of the stack, then removes the last
 *  element
 *  @top: a pointer to the last elements of the stack        
 */

int modulus(stack_t *top)
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
    int result = prev_el->n % top->n;
    prev_el->n = result;

    top = pop(top);

    return top->n;
}

