#include "lists.h"

/**
 * print_listint_safe - print a list
 * @head: linked list of type listint_t
 *
 * Return: number of nodes in list, exit with status 98 if function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t index, count = 0;
	const listint_t *current, *runner;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		index = 0;
		runner = head;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		while (index < count)
		{
			if (runner == current)
			{
				printf("-> [%p] %d\n",
				       (void *)current, current->n);
				return (count);
			}

			runner = runner->next;
			index++;
		}
	}

	return (count);
}
