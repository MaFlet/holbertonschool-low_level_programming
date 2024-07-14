#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
**malloc_checked - allocates memory using malloc
*@b: memory to be allocated
*Return: pointer
*/
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
