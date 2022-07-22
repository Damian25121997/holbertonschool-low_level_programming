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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (h == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp)
	{
		if (temp->next == NULL && x == idx - 1)
			return (add_dnodeint_end(h, n));
		else if (x == (idx - 1))
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		x++;
		temp = temp->next;
	}
	return (NULL);
}
