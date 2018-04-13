#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of dlistint_t list
 * @head: list
 * @n: new node
 *
 * Return: address of new node, or NULL if failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	end = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}

	while (end->next != NULL)
		end = end->next;

	end->next = new;
	new->prev = end;
	new->next = NULL;
	return (new);
}
