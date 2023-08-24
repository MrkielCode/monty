#include "monty.h"
/**
 * c_pall - to print a stack
 * @head: pointer to the head
 * @count: void
 * return: void;
 */

void c_pall(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void) count;

	temp  = *head;

	if (temp == NULL)
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

}
