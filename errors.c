#include "monty.h"
/**
 * check_args - To validate number of arguments
 * @argc: arguments variables
 * Return: void
 */

void check_args(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}

/**
 * malloc_error - to print malloc error
 * Return: void
 */

void malloc_error(void)
{
	printf("Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

/**
 * file_error - to return file error
 * @filename: filename to be printed
 * Return: void
 */

void file_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
}

/**
 * invalid_instructions - to check invalid instructions
 * @i: counter
 * @parse: tokenize string
 * @file: file to be close
 * @stack: pointer to header file
 * @line: line to be free
 * Return: void
 */
void invalid_instructions(unsigned int i, char *parse,
		FILE *file, stack_t **stack, char *line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", i, parse);
	fclose(file);
	free(line);
	free_stack(*stack);
}

/**
 * invalid_integer - To print error message
 * @counter: line of the error
 * @stack: pointer to header file
 * Return: void
 */

void invalid_integer(unsigned int counter, stack_t **stack)
{
	fprintf(stderr, "L%d: usage: push integer\n", counter);
	fclose(args.file);
	free(args.line);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}
