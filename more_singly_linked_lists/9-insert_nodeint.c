#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node at a given position
* @head: pointer of a pointer
* @idx: unsigned int
* @n: int
* Return: the addres of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);

	new->n = n;
	new->next = 0;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; temp != NULL && x <= idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
