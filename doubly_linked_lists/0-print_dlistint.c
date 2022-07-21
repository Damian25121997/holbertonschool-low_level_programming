#include "lists.h"

/**
* print_dlistint - print all elements of a list
* @h: pointer
* Return: numbers of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
