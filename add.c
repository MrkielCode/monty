#include "monty.h"
/**
 * c_add - to swap
 * @head: pointer to the head
 * @count: line number
 * Return: void
*/
void c_add(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int track = 0, aux;

	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		track++;
	}

	if (track < 2)
	{
		message_error(head, "can't add, stack too short", count);
	}
	temp = *head;
	aux = temp->n + temp->next->n;
	temp->next->n = aux;
	*head = temp->next;
	free(temp);
}
