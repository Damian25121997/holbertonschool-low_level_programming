#include "main.h"

/**
 * _strlen - Return the lenht of a string
 *
 * @s: is a value
 *
 * Return: x
 */

int _strlen(char *s)
{
int x = 0;

while (*s != '\0')
	{
	x++;
	s++;
	}
return (x);
}
