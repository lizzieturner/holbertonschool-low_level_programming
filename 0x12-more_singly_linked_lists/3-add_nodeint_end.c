#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: linked list of type listint_t
 * @n: element to add to list
 *
 * Return: address of new node, or NULL if function fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last = *head;

	while(last->next != NULL)
		last = last->next;

	last->next = new;
	new->next = NULL;

	return (new);
}
