#include "monty.h"
/**
 * pall - prints the stack from top to bottom
 * @stack: pointer to the head of the stack
 * @number: number of a line in the file
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int number)
{
	stack_t *temp = *stack;

	(void) number;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
