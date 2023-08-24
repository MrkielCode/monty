#include "monty.h"

void message_error(stack_t **head, char *string, int count)
{
	fprintf(stderr, "L%d: can't %s, stack too short\n", count, string);
	fclose(args.file);
	free(args.line);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
