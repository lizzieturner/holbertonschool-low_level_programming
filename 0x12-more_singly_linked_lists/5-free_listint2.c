#include "lists.h"

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: list of type listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
