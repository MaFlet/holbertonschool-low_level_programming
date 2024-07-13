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
int **array, i, c;
int len = width * height;
if (len <= 0)
return (NULL);
}
