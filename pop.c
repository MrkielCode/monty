#include "monty.h"
/**
 * c_pop - To print from the top
 * @head: stack head
 * @count: line number
 * Return: void
 */

void c_pop(stack_t **head, unsigned int count)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(args.file);
		free(args.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
