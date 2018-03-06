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
	int loop_exists = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
		{
			loop_exists = 1;
			break;
		}
	}

	if (loop_exists == 1)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}

		return (slow);
	}

	return (NULL);
}
