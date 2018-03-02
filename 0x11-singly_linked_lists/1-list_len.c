#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: list_t list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t count = 1;

	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}

	return(count);
}
