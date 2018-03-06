#include "lists.h"

/**
 * free_listint_safe - frees a list (safe version)
 * @h: linked list of type listint_t
 *
 * Return: number of nodes in freed list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *runner;
	size_t h_i, r_i;

	if (h == NULL)
		return (0);

	current = *h;
	h_i = 0;

	while (*h != NULL)
	{
		runner = *h;
		for (r_i = 0; r_i < h_i; r_i++)
		{
			if (runner == current)
			{
				*h = NULL;
				h = NULL;
				return (h_i);
			}
			runner = runner->next;
		}
		current = (*h)->next;
		free(*h);
		*h = current;
		h_i++;
	}


	*h = NULL;
	h = NULL;
	return (h_i);
}
