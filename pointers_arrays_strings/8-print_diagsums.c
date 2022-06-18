#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print diagonal sum
* @a: array
* @size: size of diagonal
*/

void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	for (x = 0; x < size * size; x += (size + 1))
		sum1 += a[x];
	for (x = size - 1; x < (size * size) - (size - 1); x += (size - 1))
		sum2 += a[x];
	printf("%d, %d\n", sum1, sum2);
}
