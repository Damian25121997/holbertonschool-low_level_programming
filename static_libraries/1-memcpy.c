#include "main.h"

/**
 * _memcpy - copie memory
 * @dest: is a string
 * @src: is a string
 * @n: is a value
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = n;
	int i;

	if (x > 0)
		{
		for (i = 0; i < x; i++)
		dest[i] = src[i];
		}
	return (dest);
}
