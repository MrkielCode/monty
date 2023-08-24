#include "monty.h"

/**
 * c_stack - to prints at the top
 * @head: pointer to the stack
 * @count: line number
 * Return: void
 */

void c_stack(stack_t **head, unsigned int count)
{
	(void) head;
	(void) count;
	args.status = 0;
}

/**
 * add_node - to add a node to the stack
 * @head: pointer to the header
 * @n: new_value
 * Return: void
 */

void add_node(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp  = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		malloc_error();
		exit(0);
	}

	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
