#include "lists.h"

/**
* add_dnodeint - add a new node
* @head: is a pointer to pointer
* @n: value
* Return: addres of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (temp == NULL)
		new->next = NULL;

	else
	{
		while (temp->prev)
			temp = temp->prev;

		temp->prev = new;
		new->next = temp;
	}
	*head = new;

	return (*head);
}
