#include "lists.h"

/**
 * print_listint_safe - print a list
 * @head: linked list of type listint_t
 *
 * Return: number of nodes in list, exit with status 98 if function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *runner;
	size_t c_i, r_i;

	if (head == NULL)
		exit(98);

	current = head;
	c_i = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;

		runner = head;
		r_i = 0;
		while (r_i < c_i)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (c_i);
			}

			runner = runner->next;
			r_i++;
		}
		c_i++;
	}

	return (c_i);
}
