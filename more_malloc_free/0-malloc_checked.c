#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using
* @b: value of variable
* Return: the new pointer
*/
void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
