#include "monty.h"
/**
 * c_rotr - to rotate stack  from bottom;
 * @head:pointer to the head
 * @count: line number
 * Return: void
 */

void c_rotr(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void) count;

	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = *head;
	temp->prev->next = NULL;
	temp->next = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
