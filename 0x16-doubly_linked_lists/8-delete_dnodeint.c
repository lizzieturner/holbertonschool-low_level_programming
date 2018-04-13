#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at certain position in dlistint_t list
 * @head: list
 * @index: position of node to delete
 *
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *runner = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = runner->next;
		free(runner);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (runner->next == NULL)
			return (-1);
		runner = runner->next;
	}

	tmp = runner->next;
	runner->next = tmp->next;
	runner->prev = tmp->prev;
	free(tmp);
	return (1);
}
