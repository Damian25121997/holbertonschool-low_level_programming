#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: is a string
 * @c: is a variable
 * Return: s
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
