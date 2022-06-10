#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: character print
 */

void print_triangle(int size)
{
	int m, b, c;

	if (size <= 0)
		_putchar(10);

	for (m = 1; m <= size; m++)
	{
		for (b = 1; b <= (size - m); b++)
		{
			_putchar(' ');
		}
		for (c = 1; c <= m; c++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
