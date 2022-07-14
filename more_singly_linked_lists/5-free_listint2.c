#include "lists.h"

/**
* free_listint2 - free the memory
* @head: pointer of a pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
