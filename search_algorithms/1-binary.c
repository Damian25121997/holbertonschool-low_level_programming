#include "search_algos.h"

/**
 * binary_search - searches for value in a sorted array using the Binary search
 * @array: is an array
 * @size: is the size of array
 * @value: is the value to look for in the array
 * Return: the first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (x = left; x < right; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = left + (right - left) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			right = x - 1;
		else
			left = x + 1;
	}
	return (-1);
}
