#include "lists.h"

/**
* delete_nodeint_at_index - delete the node at index
* @head: pointer of a pointer
* @index: unsigned int
* Return: 1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delet, *temp = *head;
	unsigned int x;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	else
	{
		for (x = 0; x < index - 1; x++)
		{
			temp = temp->next;
			if (!temp || !(temp->next))
			{
				return (-1);
			}
		}
		delet = temp->next;
		temp->next = temp->next->next;
		delet->next = NULL;
		free(delet);
		return (1);
	}
}
