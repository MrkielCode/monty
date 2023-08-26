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

	if (*head == NULL || (*head)->next == NULL)
		return;

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = *head;
	(*head)->prev->next = NULL;
	temp->next = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
