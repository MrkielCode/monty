#include "monty.h"
/**
 * c_swap - to swap
 * @head: pointer to the head
 * @count: line number
 * Return: void
*/
void c_swap(stack_t **head, unsigned int count)
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
		message_error(head, "can't swap, stack too short", count);
		message_error(head, "swap", count);
	}

	temp = *head;
	aux = temp->n;
	temp->n = temp->next->n;
	temp->next->n = aux;
}
