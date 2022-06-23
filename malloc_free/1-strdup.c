#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* _strdup - return a pointer to a newly allocated space in memory.
* @str: array to copy
* Return: pointer
*/

char *_strdup(char *str)
{
	char *pointer;
	int size, x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	pointer = (char *)malloc((size + 1) * sizeof(char));

	if (pointer == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		pointer[x] = str[x];
	}
	return (pointer);
}
