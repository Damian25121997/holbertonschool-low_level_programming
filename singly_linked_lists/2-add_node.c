#include "lists.h"

/**
* add_node - adds a new node
* @head: pointer or pointer
* @str: string
* Return: new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}
	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
