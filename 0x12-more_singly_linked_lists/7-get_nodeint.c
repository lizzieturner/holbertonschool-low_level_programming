#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: linked list of type listint_t
 * @index: position of node
 *
 * Return: node at given position index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
