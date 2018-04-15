#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: list
 * @idx: position
 * @n: new node
 *
 * Return: address of new node or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *runner = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*h == NULL || idx == 0)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}

	for (i = 0; i < idx; i++)
	{
		if (runner == NULL)
			return (NULL);
		runner = runner->next;
	}


	new->next = runner->next;
	new->prev = runner;
	runner->next = new;
	return (new);
}
