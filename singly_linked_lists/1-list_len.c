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
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
