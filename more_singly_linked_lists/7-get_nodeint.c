#include "lists.h"

/**
* get_nodeint_at_index - return the nth node of a linked list
* @head: is a pointer
* @index: is a int
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *front, *back;
	unsigned int x;

	front = back = head;

	for (x = 0; x < index - 1; x++)
	{
		front = front->next;
	}

	while (front->next != NULL)
	{
		front = front->next;
		back = back->next;
	}
	return (back);
}
