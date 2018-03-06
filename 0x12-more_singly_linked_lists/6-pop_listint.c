#include "lists.h"

/**
 * pop_listint - deletes the head node of a list and returns the data
 * @head: linked list of type listint_t
 *
 * Return: date stored at head node
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *first = *head;

	if (head == NULL || *head == NULL)
		return (0);

	*head = first->next;

	num = first->n;

	free(first);

	return (num);
}
