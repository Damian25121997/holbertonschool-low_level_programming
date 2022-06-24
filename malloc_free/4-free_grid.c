#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* free_grid - frees a 2d grid previously created
* @grid: poiter to poiter
* @height: number of rows in grid
* Return: void
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
