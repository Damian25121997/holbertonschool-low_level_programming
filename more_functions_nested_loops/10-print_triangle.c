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
	for (m = 0; m < size; m++)
	{
	for (b = 0; b < size; b++)
	{
	if ( m < b)
	_putchar(' ');
	else
	_putchar(35);
	}
	_putchat('\n');
	}
	}
	else
	_putchar('\n');
}
