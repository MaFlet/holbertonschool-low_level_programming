#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**_calloc - allocates memory for an array
*@nmemb: array
*@size: size of bytes
*Return: NULL on failure and nmemb is size 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i = 0;
char *array;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(nmemb * size);
if (array == NULL)
{
return (NULL);
}
while (i < (nmemb * size))
{
array[i] = 0;
i = i + 1;
}
return (array);
}
