#include "main.h"

/**
 * free_grid - entry
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
int i;
for (i = height; i >= 0; i--)
{
free(grid[i]);
}
free(grid);
}
