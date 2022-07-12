#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - print a full list
* @h: struct list to print
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int x;
	const list_t *p = h;

	for (; p; p = p->next)
	{
		if (p->str)
		{
			printf("[%u] %s", p->len, p->str);
		}
		else
		{
			printf("[0] (nil)");
		}
		x++;
		putchar('\n');
	}
	return (x);
}
