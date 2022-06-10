#include "main.h"

/**
 * print_square - print a square, followed by a new line
 *
 * @size: character
 */

void print_square(int size)
{
	int m, b;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
		for (b = 0; b < size; b++)
		_putchar(35);
		_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
