#include "lists.h"

/**
* insert_dnodeint_at_index - insert a new node at a given position
* @h: pointer of a pointer
* @idx: unsigned int
* @n: int
* Return: the addres of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == n)
		return (add_dnodeint_end(h, n));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	while (x < idx - 1)
	{
		temp = temp->next;
		x++;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
