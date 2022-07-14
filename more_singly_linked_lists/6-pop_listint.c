#include "lists.h"

/**
* pop_listint - delete the head node of a linked list
* @head: pointer of a pointer
* Return: 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (0);
}
