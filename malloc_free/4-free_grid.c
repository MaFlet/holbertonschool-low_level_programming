#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*free_grid - frees 2 dimensional grid created by
*alloc_grid function
*@grid: pointer to alloc_grid function
*@height: height array
*Return: NULL on failure and if width and height is 0 or negative
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; ++i)
{
free(grid[i]);
}
free(grid);
}
