#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: is a string
 * @n: number of elements to concatenate
 * @src: is a string
 *
 * Return: dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	for ( ; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
