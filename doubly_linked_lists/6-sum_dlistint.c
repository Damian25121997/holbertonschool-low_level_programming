#include "lists.h"

/**
* sum_dlistint - return the sum of all the data
* @head: is a pointer
* Return: sum the of all
*/

int sum_dlistint(listint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
