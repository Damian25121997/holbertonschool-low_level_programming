#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of a list
* @head: pointer of pointer
* @n: int
* Return: Address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
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
