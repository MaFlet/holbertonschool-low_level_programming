#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**array_range - creates an array of integers
*@min: minimum value of integer
*@max: maximum value of integer
*Return: NULL on failure and if min > max
*/
int *array_range(int min, int max)
{
int *ptr;
int array;
if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
{
return (NULL);
}
array = 0;
while (min <= max)
{
ptr[array] = min;
min++;
array++;
}
return (ptr);
}
