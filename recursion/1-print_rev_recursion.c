#include "main.h"
/**
* _print_rev_recursion - print a string, followed by a new line.
* @s: is a string
* Return: Always
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
