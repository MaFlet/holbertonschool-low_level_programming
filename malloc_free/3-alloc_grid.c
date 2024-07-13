#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
***alloc_grid - returns to 2 dimensional array of integers
*@width: width array
*@height: height array
*Return: NULL on failure and if width and height is 0 or negative
*/
int **alloc_grid(int width, int height)
{
int i, c, j, n;
int **array;
if (width <= 0 || height <= 0)
return (NULL);
array = malloc(sizeof(int *) * height);
if (array == NULL)
{
free(array);
return (NULL);
}
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (c = i; c >= 0; c--)
{
free(array[c]);
}
free(array);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (n = 0; n < width; n++)
{
array[j][n] = 0;
}
}
return (array);
}
