#include "monty.h"
/**
 * c_mul - to multiply
 * @head: pointer to the head
 * @count: line number
 * Return: void
*/
void c_mul(stack_t **head, unsigned int count)
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
		message_error(head, "can't mul, stack too short", count);

	temp = *head;

	aux = temp->next->n * temp->n;
	temp->next->n = aux;
	*head = temp->next;
	free(temp);
}
