#ifndef MONTY_H
#define MONTY_H

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void pall(stack_t *top);
void pint(stack_t *top);
stack_t *pop(stack_t *top);
stack_t *push(stack_t *top, int data);
stack_t *swap(stack_t *top);
int add(stack_t *top);
void nop(void);
int sub(stack_t *top);
int divide(stack_t *top);
int mul(stack_t *top);
int modulus(stack_t *top);

#endif
