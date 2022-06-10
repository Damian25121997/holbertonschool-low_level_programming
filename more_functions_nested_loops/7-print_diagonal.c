#include "main.h"

/**
 * print_diagonal - daws a diagonal line on the terminal
 *
 * @n: character
 */

void print_diagonal(int n)
{
	int m,  b;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
		{
		for (b = 0; b < m; b++)
		_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
