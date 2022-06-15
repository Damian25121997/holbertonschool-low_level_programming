#include "main.h"

/**
 * puts_half - Print every other character of a string
 *
 * @str: is a string.
 *
 * Return: not return
 *
 */

void puts_half(char *str)
{
	int x;
	
	for (x = 0; str[x] != '\0'; x++)
		;

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
