#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: is a string
 * @n: number of elements to concatenate
 * @src: is a string
 *
 * Return: dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int z, x;
	for (z = 0; dest[z] != '\0'; z++)
		;
	for (x = 0; src[x] != '\0' && n > 0; x++, n--)
	{
		dest[z] = src[x];
			z++;
	}
	return (dest);
}
