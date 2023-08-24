#include "monty.h"
f_args args = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *line;
	FILE *file;
	size_t size = 0;
	stack_t *stack = NULL;
	ssize_t readLine = 1;
	unsigned int count = 0;

	check_args(argc);

	file = fopen(argv[1], "r");
	args.file = file;

	if (!file)
	{
		file_error(argv[1]);
	}

	while (readLine > 0)
	{
		line = NULL;
		readLine = getline(&line, &size, file);
		args.line = line;
		count++;
		if (readLine > 0)
		{
			interprete(line, &stack, count, file);
		}
		free(line);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
