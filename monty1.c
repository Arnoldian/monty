#include "monty.h"

/* task 4 */

void f_add(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%u: can't add, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n;
    f_pop(head, number);
}


/* task 5 */

void f_nop(stack_t **head, unsigned int number)
{
    (void)head;    // Unused parameter
    (void)number;  // Unused parameter
    // Nop doesn't do anything
}

