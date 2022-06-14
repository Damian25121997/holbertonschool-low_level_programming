#include "main.h"

/**
 * print_rev - Print a string, in reverse
 *
 * @s: is a string.
 *
 * Return: not return
 *
 */

void print_rev(char *s)
{
	int size = 0;

		while (*s != '\0')
		{
			s++;
			size++;
		}
		while (size >= 0)
		{
			s--;
			_putchar(*s);
			size--;
		}
		_putchar('\n');
}
