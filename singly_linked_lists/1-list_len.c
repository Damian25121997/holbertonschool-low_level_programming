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
	int n = 0;

	if (h == NULL)
	{
		return (n);
	}
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
