#include "main.h"

/**
 * rev_string - Reverse a string
 *
 * @s: is a string.
 *
 * Return: not return
 *
 */

void rev_string(char *s)
{
	int x, z, size;
	char h;

	for (size = 0; s[size] != '\0'; size++)
		;

	x = size;
	for (size--, z = 0; z < x / 2; size--, z++)
	{
		h = s[z];
		s[z] = s[size];
		s[size] = h;
	}
}
