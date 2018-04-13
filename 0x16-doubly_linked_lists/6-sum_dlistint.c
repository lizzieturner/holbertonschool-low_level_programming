#include "lists.h"

/**
 * sum_dlistint - find the sum of all values in dlistint_t int
 * @head: list
 *
 * Return: sum of data, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *runner = head;
	int sum = 0;

	while (runner != NULL)
	{
		sum += runner->n;
		runner = runner->next;
	}

	return (sum);
}
