#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 */

void more_numbers(void)
{
	int n, m;
	n = 0;
	while (n < 10)
	{
		for (m = 0; m < 15; m++)
			_putchar (m + '0');
	}
	n++;
	_putchar(10);
}
