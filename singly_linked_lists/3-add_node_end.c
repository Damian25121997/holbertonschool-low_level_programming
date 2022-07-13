#include "lists.h"

/**
* add_node_end - adds a new nod
* @head: pointer or pointer
* @str: string
* Return: new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;
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
	new->next = NULL;

	if  (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new;
	return (new);
}
