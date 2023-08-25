#include "monty.h"
/**
 * c_pchar - prints char
 * @head: pointer to head of the stack
 * @count: line number
 * Return: void
*/

void c_pchar(stack_t **head, unsigned int count)
{
	stack_t *temp;

	temp = *head;
	if (!temp)
	{
		message_error(head, "can't pchar, stack empty", count);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		message_error(head, "can't pchar, value out of range", count);
	}
	printf("%c\n", temp->n);
}
