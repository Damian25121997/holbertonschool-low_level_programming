#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: is a string
 * @c: is a variable
 * Return: s
 */

char *_strchr(char *s, char c)
{
	 int x = 0;

	while (s[x] != '\0' && s[x] != c)
		x++;
	if (s[x] == c)
		return (&s[x]);
	else
		return ('\0');
}
