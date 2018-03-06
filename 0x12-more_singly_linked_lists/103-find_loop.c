#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list of type listint_t
 *
 * Return: address of node where loop starts, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
			return (fast);
	}

	return (NULL);
}
