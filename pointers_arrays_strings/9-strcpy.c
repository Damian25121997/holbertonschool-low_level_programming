#include "main.h"

/**
 * *_strcpy - copies the string pointed.
 *
 * @dest: is a string
 *
 * @src: is a string
 *
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	return (dest);
}
