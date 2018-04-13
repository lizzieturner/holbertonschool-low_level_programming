#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_d list
 * @head: list
 * @index: position of node to return
 *
 * Return: address of node at position index, or NULL if failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *runner = head;
	unsigned int count;

	for (count = 0; runner != NULL; count++)
	{
		if (count == index)
			return (runner);
		runner = runner->next;
	}

	return (NULL);
}
