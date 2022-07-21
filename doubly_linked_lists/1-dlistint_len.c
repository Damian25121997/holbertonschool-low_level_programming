#include "lists.h"

/**
* dlistint_len - return the number of elements in a linked list
* @h: is a pointer
* Return: numbers of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
