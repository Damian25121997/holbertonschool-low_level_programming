#include "lists.h"

/**
* delete_dnodeint_at_index - delete the node at index
* @head: pointer of a pointer
* @index: unsigned int
* Return: 1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delet;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	delet = *head;
	if (index == 0)
	{
		*head = delet->next;
		if (delet->next != NULL)
		{
			delet->next->prev = NULL;
		}
		free(delet);
		return (1);
	}
	for (x = 0; delet != NULL && x < index - 1; x++)
	{
		delet = delet->next;
	}
	if (delet == NULL || delet->next == NULL)
		return (-1);
	if (delet->next->next != NULL)
	{
		delet->next = delet->next->next;
		free(delet->next->prev);
		delet->next->prev = delet;
		return (1);
	}
	else
	{
		free(delet->next);
		delet->next = NULL;
		return (1);
	}
	return (-1);
}
