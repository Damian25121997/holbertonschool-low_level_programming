#include "main.h"

/**
 * puts2 - Print every other character of a string
 *
 * @str: is a string.
 *
 * Return: not return
 *
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
