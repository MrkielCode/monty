#include "monty.h"

/**
 * c_rotl - To rotate left
 * @head: pointer to the head
 * @count: void
 * Return: void
 */
void c_rotl(stack_t **head,  unsigned int count)
{
	stack_t *current, *new_head;
	(void) count;

	if (*head == NULL || (*head)->next == NULL)
		return;

	current = *head;
	new_head = (*head)->next;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = *head;
	(*head)->next = NULL;
	(*head)->prev = current;
	*head = new_head;
}
