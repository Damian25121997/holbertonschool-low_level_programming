#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: is a string
 * @accept: is a string
 * Return: x
 */

unsigned int _strspn(char *s, char *accept)
{
	int x, y, z;

	x = 0;
	z = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
			{
			if (s[x] == accept[y])
			{
				z++;
				break;
			}
			y++;
			}
			if (accept[y] == '\0')
			{
				return (z);
			}
		x++;
	}
	return (x);
}
