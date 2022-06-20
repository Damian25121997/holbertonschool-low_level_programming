#include "main.h"
/**
* _strlen_recursion - return the length of a string
* @s: is a string
* Return: Always
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
