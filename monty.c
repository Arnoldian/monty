#include "monty.h"

/** task 0 */

void f_push(stack_t **head, unsigned int number)
{
    if (!bus.arg || !isdigit(*bus.arg))
    {
        fprintf(stderr, "L%u: usage: push integer\n", number);
        exit(EXIT_FAILURE);
    }

    adding_node(head, atoi(bus.arg));
}

void f_pall(stack_t **head, unsigned int number)
{
    (void)number; // Unused parameter
    stack_t *current = *head;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}


/* task 1 */

void f_pint(stack_t **head, unsigned int number)
{
    if (!*head)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}


/* task 2 */

void f_pop(stack_t **head, unsigned int number)
{
    if (!*head)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", number);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *head;
    *head = (*head)->next;
    free(temp);
}


/* task 3 */

void f_swap(stack_t **head, unsigned int number)
{
    if (!*head || !(*head)->next)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", number);
        exit(EXIT_FAILURE);
    }

    int temp = (*head)->n;
    (*head)->n = (*head)->next->n;
    (*head)->next->n = temp;
}

