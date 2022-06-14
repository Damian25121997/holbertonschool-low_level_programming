#include "main.h"

/**
 * _puts - Print a string, followed by new line, to studout.
 *
 * @str: is a string.
 *
 * Return: not return
 *
 */

void _puts(char *str)
{
	int x = 0;
	{
		while (*str != '\0')
		{
			_putchar(*str);
			x++;
			str++;
		}
		_putchar('\n');
	}
}
