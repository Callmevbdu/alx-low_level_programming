#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * "alloc_grid" function
 * @grid: integer
 * @height: integer
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);

}
