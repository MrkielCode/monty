#include "monty.h"
/**
 * c_sub- to subtract fromr;
 * @head: pointer to the head
 * @count: line number
 * Return: void
*/
void c_sub(stack_t **head, unsigned int count)
{
	stack_t *temp;
	int track, diff;

	temp = *head;

	for (track = 0; temp != NULL; track++)
		temp = temp->next;

	if (track < 2)
	{
		message_error(head, "can't sub, stack too short", count);
	}

	temp = *head;
	diff = temp->next->n - temp->n;
	temp->next->n = diff;
	*head = temp->next;
	free(temp);
}
