#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* alloc_grid - nested loop to make grid
* @width: is a int
* @height: is a int
* Return: pointer
*/

int **alloc_grid(int width, int height)
{
	int **pointer;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(sizeof(int) * width);
		if (pointer[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
			{
				free(pointer[x]);
			}
			free(pointer);
			return (NULL);
		}
		for (z = 0; z < width; z++)
		{
			pointer[x][z] = 0;
		}
	}
	return (pointer);
}
