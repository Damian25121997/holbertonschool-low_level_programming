#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: numbers of elements in array
 */

void reverse_array(int *a, int n)
{
	int x, z;

	for (x = 0; x < (n / 2); x++)
	{
		z = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = z;
	}
}
