#include "monty.h"

/**
* stack_freeing - frees doubly-linked list specified
* @head: head of stack
*/

void stack_freeing(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
