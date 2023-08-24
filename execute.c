#include "monty.h"

/**
 * interprete - to interprete monty codes
 * @line: content of the file
 * @stack: pointer to header file
 * @count: line number
 * @file: file to be execute
 * Return: success or failure
 */

int interprete(char *line, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t instructions[] = {
		 {"push", c_push}, {"pall", c_pall}, {"pint", c_pint},
		 {"pop", c_pop},
		 {"queue", c_queue},
		 {"stack", c_stack},
		 {NULL, NULL} 
	};

	unsigned int i = 0;
	char *op_parse;

	op_parse = strtok(line, " \n\t");

	if (op_parse && op_parse[0] == '#')
		return (0);

	args.parse = strtok(NULL, " \n\t");

	while (instructions[i].opcode && op_parse)
	{
		if (strcmp(op_parse, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, count);
			return (0);
		}
		i++;
	}

	if (op_parse && instructions == NULL)
	{
		invalid_instructions(count, op_parse, file, stack, line);
	}
	return (1);
}
