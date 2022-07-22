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
	unsigned int x;
	dlistint_t *new, *temp = *h;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = 0;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	for (x = 0; temp != NULL && x <= idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
