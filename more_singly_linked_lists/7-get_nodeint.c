#include "lists.h"

/**
* get_nodeint_at_index - return the nth node of a linked list
* @head: is a pointer
* @index: is a int
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *front;
	unsigned int x = 0;

	front = head;

	if (head == NULL)
		return (NULL);

	while (front && x < index)
	{
		front = front->next;
		x++;
	}
	return (front);
}
