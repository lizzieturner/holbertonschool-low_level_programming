#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list to free
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}


}
