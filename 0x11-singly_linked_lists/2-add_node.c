#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t list
 * @head: list_t list
 * @str: new node to add
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;

	if(head == NULL)
		return (NULL);

	tmp = malloc(sizeof(list_t));

	if (tmp == NULL)
		return (NULL);

	tmp->str = strdup(str);

	if (tmp == NULL)
	{
		free(tmp);
		return(NULL);
	}

	while (str[length] != '\0')
		length++;

	tmp->len = length;

	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
