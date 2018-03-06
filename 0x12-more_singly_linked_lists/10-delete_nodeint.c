#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a list
 * @head: linked list of type listint_t
 * @index: position to delete node at
 *
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp;
	unsigned int c_i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (c_i < index - 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		c_i++;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
