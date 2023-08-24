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
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(args.file);
		free(args.line);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
