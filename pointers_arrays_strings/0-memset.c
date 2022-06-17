#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: is a string
 * @b: is a variable
 * @n: is a value
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int x = n;
	
	if (x > 0)
		{
		for (i = 0; i < x; i++)
		s[i] = b;
		}
	return (s);
}
