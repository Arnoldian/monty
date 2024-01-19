#include "monty.h"

/**
 * f_pint - prints top
 * @head: head of stack
 * @counter: count
 * Return: no return statement
*/

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		stack_freeing(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
