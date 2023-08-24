#include "monty.h"
/**
 * c_pop - To print from the top
 * @head: stack head
 * @count: line number
 * Return: void
 */

void c_pop(stack_t **head, unsigned int count)
{
	stack_t *temp;

	if (*head == NULL)
	{
		message_error(head, "can't pop an empty stack", count);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
