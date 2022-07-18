#include "main.h"

/**
* print_binary - print binary representation of a number
* @n: decimal number
*/

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (tmp = n, x = 0; (tmp >>= 1) > 0; x++)
		;
	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
