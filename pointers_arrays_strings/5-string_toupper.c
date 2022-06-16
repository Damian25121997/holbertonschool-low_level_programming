#include "main.h"

/**
 * string_toupper - change all lowercase letters of uppercase
 * @p: string
 * Return: p
 */

char *string_toupper(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (p[x] >= 'a' && p[x] <= 'z')
		{
			p[x] -= ' ';
		}
	}
	return (p);
}
