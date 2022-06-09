#include "main.h"

/**
 * times_table - print the 9 times tables
 */

void times_table(void)
{
	int n, i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j <= 9 ; j++)
		{
			n = i * j;
			if ((n / 10) != 0)
			{
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((n % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
