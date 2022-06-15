#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array of integres
 *
 * @a: int type array pointer
 *
 * @n: int type integrer
 *
 */

void print_array(int *a, int n)
{
	int z;

	z = 0;
	for (n--; n >= 0; n--, z++)
	{
		printf("%d", a[z]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
