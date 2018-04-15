#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index in dlistint_t list
 * @head: list
 * @index: position of node to delete
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *runner = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = runner->next;
		if (runner->next != NULL)
			runner->next->prev = NULL;
		free(runner);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (runner->next == NULL)
			return (-1);
		runner = runner->next;
	}

	runner->prev->next = runner->next;
	if (runner->next != NULL)
		runner->next->prev = runner->prev;
	free(runner);
	return (1);
}
