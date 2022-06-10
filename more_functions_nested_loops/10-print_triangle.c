#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: character print
 */

void print_triangle(int size)
{
	int m, b;

	if (size > 0)
	{
	for (m = 0; m > size; m--)
	{
	_putchar(35);
        _putchar('\n');
	for (b = 0; b > size; b--)
	_putchar(35);
	_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
