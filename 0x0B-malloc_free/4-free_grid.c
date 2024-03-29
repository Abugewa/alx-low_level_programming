#include "main.h"
#include <stdlib.h>


/**
 * free_grid - frees a grid
 * @grid: grid
 * @height: height of grid
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
