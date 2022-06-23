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

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	pointer = malloc(sizeof(int) * height);

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(sizeof(int) * width);
		if (pointer == NULL)
		{
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
