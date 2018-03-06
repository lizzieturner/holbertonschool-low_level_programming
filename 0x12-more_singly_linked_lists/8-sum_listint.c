#include "lists.h"

/**
 * sum_listint - returns the sum of all elements of a list
 * @head: linked list of type listint_t
 *
 * Return: sum of elements of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
