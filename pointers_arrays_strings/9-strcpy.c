#include "main.h"

/**
 * *_strcpy - Reverse a string
 *
 * @s: is a string.
 *
 * Return: not return
 *
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	return (dest);
}
