#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - function
* @array: array of elements
* @size: size of the array
* @cmp: pointer
* Return: Always
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if ((*cmp)(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
