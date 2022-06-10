#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 */

void more_numbers(void)
{
	int n, m;

	for (n = 1; n < 10; n++)
	{
		for (m = 0; m < 15; m++)
			_putchar (m + '0');
	}
	_putchar(10);
}
