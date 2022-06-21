#include "main.h"

/**
 * _strpbrk - Search a string for any of of a set of bytes.
 * @s: is a string
 * @accept: is a string
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int x, z;
	char *p;

	x = 0;
	while (s[x] != '\0')
	{
		z = 0;
		while (accept[z] != '\0')
		{
			if (s[x] == accept[z])
			{
				p = &s[x];
				return (p);
			}
			z++;
		}
		x++;
	}
	return (0);
}
