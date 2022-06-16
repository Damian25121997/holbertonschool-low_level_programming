#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: is a string
 *
 * @src: is a string
 *
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int z, x;

	for (z = 0; dest[z] != '\0'; z++)
		;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[z] = src[x];
		z++;
	}
	dest[z] = '\0';
	return (dest);
}
