#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* array_iterator - executes a function
* @array: pointer to an array
* @size: size of the array
* @action: pointer to a function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			(*action)(array[x]);
	}
}
