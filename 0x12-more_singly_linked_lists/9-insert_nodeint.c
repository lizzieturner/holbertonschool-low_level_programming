#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at a given position in a list
 * @head: linked list of type listint_t
 * @idx: position to add element at
 * @n: element to add to list
 *
 * Return: address of new node, or NULL if function fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int c_i = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	while (c_i < idx - 1)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}

		current = current->next;
		c_i++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
