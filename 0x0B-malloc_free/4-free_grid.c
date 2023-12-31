#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
return;
i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
