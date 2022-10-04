#include "main.h"

/**
 * free_grid - this frees a 2d integer grid thats was created by **alloc_grid.
 * @grid: pointer to array of ints
 * @height: number of rows in grid
 * Return: Nothing, frees memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
