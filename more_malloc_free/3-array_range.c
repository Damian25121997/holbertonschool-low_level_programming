#include "main.h"
#include <string.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int a, x;
	char *pointer;

	if (min > max)
		return (NULL);

	a = max - min + 1;

	pointer = malloc(sizeof(int) * a);

	if (p == NULL)
		return (NULL);

	for (x = 0; x <= a; x++)
		pointer[x] = min + x;
	return (pointer);
}
