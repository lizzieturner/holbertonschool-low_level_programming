#include "lists.h"

/**
 * free-dlistint - frees a dlistint_t list
 * @head: list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *runner = head;

	while (runner != NULL)
	{
		runner = runner->next;
		free(head);
		head = runner;
	}
}
