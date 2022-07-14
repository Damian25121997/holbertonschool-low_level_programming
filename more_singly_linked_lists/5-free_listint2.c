#include "lists.h"

/** free_listint - free the memory
* @head: pointer of a pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}

