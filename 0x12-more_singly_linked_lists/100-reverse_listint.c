#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: linked list of type listint_t
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1 = NULL, *tmp2 = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}

	*head = tmp2;

	return (*head);
}
