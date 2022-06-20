#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - print a string, followed by a new line.
* @s: is a string
* Return: Always
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
