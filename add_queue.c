#include "monty.h"
/**
 * c_queue - to print at the top
 * @head: pointer to the head
 * @count: line number
 * Return: void
 */

void c_queue(stack_t **head, unsigned int count)
{
	(void) head;
	(void) count;

	args.status = 1;
}


/**
 * add_queue - to add a queue
 * @n: new value
 * @head: pointer to the head
 * Return: no void
 */

void add_queue(stack_t **head, int n)
{
	stack_t *new_node;
	stack_t *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		printf("Error\n");

	new_node->n = n;
	new_node->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}

	if (!temp)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		temp->next = new_node;
		new_node->prev = temp;
	}

}
