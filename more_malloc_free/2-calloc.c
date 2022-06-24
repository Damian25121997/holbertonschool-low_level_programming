#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _calloc - allocates memory for an array
* @nmemb: value
* @size: value
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		pointer[x] = 0;
	return (pointer);
}
