#include "monty.h"

/**
 * c_push - To add a node to a stack
 * @head: pointer to the header of the stack
 * @count: line counter
 * Return: void
 */

void c_push(stack_t **head, unsigned int count)
{
	int m, n = 0, flag = 0;

	if (args.parse)
	{
		if (args.parse[0] == '-')
			n++;

		for (; args.parse[n] != '\0'; n++)
		{
			if (args.parse[n] > 57 || args.parse[n] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			invalid_integer(count, head);
		}

	}
	else
		invalid_integer(count, head);
	m = atoi(args.parse);

	if (args.status == 0)
		add_node(head, m);
	else
		add_queue(head, m);
}
