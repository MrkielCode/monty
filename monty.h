#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);

} instruction_t;

/**
 * struct file_arg - file variables
 * @file: it connect to monty file
 * @line: array of line to be read from monty file
 * @parse: tokenized variables
 * @status: check if it is stack or queue
 */

typedef struct file_arg
{
	FILE *file;
	char *line;
	char *parse;
	int status;
} f_args;
extern f_args args;

/** system prototype **/
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

/* monty error functionality */
void check_args(int argc);
void file_error(char *filename);
void malloc_error(void);
void invalid_instructions(unsigned int i, char *parse,
		FILE *file, stack_t **stack, char *line);
void invalid_integer(unsigned int counter, stack_t **stack);
void message_error(stack_t **head, char *string, int count);

/*monty functionality*/
int interprete(char *line, stack_t **stack, unsigned int count, FILE *file);

/** stack and queue operations **/
void c_pall(stack_t **head, unsigned int count);
void c_pint(stack_t **head, unsigned int count);
void c_pop(stack_t **head, unsigned int count);
void c_queue(stack_t **head, unsigned int count);
void c_push(stack_t **head, unsigned int count);
void c_stack(stack_t **head, unsigned int count);
void c_swap(stack_t **head, unsigned int count);
void c_nop(stack_t **head, unsigned int count);
void c_add(stack_t **head, unsigned int count);
void c_sub(stack_t **head, unsigned int count);
void c_div(stack_t **head, unsigned int count);
void c_mul(stack_t **head, unsigned int count);
void c_mod(stack_t **head, unsigned int count);
void c_pchar(stack_t **head, unsigned int count);
void c_pstr(stack_t **head, unsigned int count);
void add_node(stack_t **head, int n);
void add_queue(stack_t **head, int n);

/** free memory **/
void free_stack(stack_t *head);

#endif
