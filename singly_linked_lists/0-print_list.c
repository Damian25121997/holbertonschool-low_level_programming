#include "list.h"

/**
*i print_list - print a full list
* @h: struct list to print
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		x++;
		h = h->next;
	}
	return (x);
}
