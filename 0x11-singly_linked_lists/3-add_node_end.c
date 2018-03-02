#include "lists.h"

/**
 * add_node_end - adds a new element at the end of a list
 * @head: list_t list
 * @str: new node to add
 *
 * Return: address of new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;
	list_t *last = *head;

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);

	if (tmp->str == NULL)
	{
		free(tmp);
		return (NULL);
	}

	while (str[length] != '\0')
		length++;

	tmp->len = length;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = tmp;
	tmp->next = NULL;

	return (tmp);
}
