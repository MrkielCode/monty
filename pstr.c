#include "monty.h"
/**
 * c_pstr - prints string
 * @head: pointer to head of the stack
 * @count: line number
 * Return: void
*/

void c_pstr(stack_t **head, unsigned int count)
{
	stack_t *temp;
	(void)count;

	temp = *head;

	while (temp)
	{
		if (temp->n > 127 || temp->n < 0)
		{
			break;
		}
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
