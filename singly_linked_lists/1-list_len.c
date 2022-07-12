#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* list_len - singly linked list
* @h: pointer
* Return: nodes
*/

size_t list_len(const list_t *h)
{
	int x = 0;

	if (h == NULL)
	{
		return (x);
	}
	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
