#include "lists.h"

/**
* get_dnodeint_at_index - return the nth node of a linked list
* @head: pointer to head
* @index: node index return
* Return: node at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int x = 0;

	temp = head;

	if (head == NULL)
		return (NULL);

	while (temp && x < index)
	{
		front = front->next;
		x++;
	}
	return (temp);
}
