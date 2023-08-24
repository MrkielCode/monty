#include "monty.h"
/**
 * free_stack - to free stack in linked list
 * @head: pointer to the head
 * Return: void
 */

void free_stack(stack_t *head)
{
	stack_t *temp, *next_node;

	temp = head;

	while (temp != NULL)
	{
		next_node = temp->next;
		free(temp);
		temp = next_node;
	}
}
