#include "monty.h"

/**
 * push - adds elements to the stack
 * @stack: pointer to the head of the head of the stack
 * @number: the elementto be added
 * Return: nothing
 */
void push(stack_t **stack, unsigned int number)
{
	stack_t *node;
	char *num;

	num = strtok(NULL, DELIMS);
	if (num == NULL)
	{
		printf("L%u: usage: push integer\n",number);
		exit(EXIT_FAILURE);
	}

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(num);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = node;

	*stack = node;
}
