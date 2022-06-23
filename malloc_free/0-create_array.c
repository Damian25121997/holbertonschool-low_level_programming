#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - cretes an array of chars
* @size: value of array
* @c: character
* Return: poiter.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int z;
	char *pointer;

	if (size == 0)

	return (NULL);

	pointer = (char *)malloc(size * sizeof(char));

	if (pointer == NULL)
	return (NULL);
	else
	{
		for (z = 0; z < size; z++)
		{
			pointer[z] = c;
		}
		return (pointer);
	}
}
