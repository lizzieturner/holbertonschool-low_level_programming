#include "sort.h"

/**
 * insertion_sort_list - sort using the insertion sort algorithm
 * @list: doubly linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *runner;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	runner = (*list)->next;
	while (runner != NULL)
	{
		while (runner->prev != NULL && runner->n < runner->prev->n)
		{
			runner->prev->next = runner->next;
			if (runner->next != NULL)
				runner->next->prev = runner->prev;
			runner->next = runner->prev;
			runner->prev = runner->prev->prev;
			runner->next->prev = runner;
			if (runner->prev == NULL)
				*list = runner;
			else
				runner->prev->next = runner;
			print_list(*list);
		}
		runner = runner->next;
	}
}
