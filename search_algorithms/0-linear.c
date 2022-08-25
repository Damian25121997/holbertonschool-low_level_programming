#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: is an array
 * @size: is the size of array
 * @value: is the value to look for in the array
 * Return: the first index where value is located
 */


int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
