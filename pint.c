#include "monty.h"
/**
 * c_pint - To print from the top
 * @head: stack head
 * @count: line number
 * Return: void
 */

void c_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		message_error(head, "can't pint, stack empty", count);
	}
	printf("%d\n", (*head)->n);
}
