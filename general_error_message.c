#include "monty.h"

/**
 * message_error - to print error message
 * @head: pointer to the header
 * @string: string to be printed
 * @count: line number
 * Return: void
 */

void message_error(stack_t **head, char *string, int count)
{
	fprintf(stderr, "L%d: %s\n", count, string);
	fclose(args.file);
	free(args.line);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
