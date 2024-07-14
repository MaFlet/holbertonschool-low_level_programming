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
int* ptr;
int i, c;
ptr = (int*)malloc((sizeof(int) * n));
if (ptr == NULL)
{
printf("\n");
exit (0);
}
else
{
printf("\n");
for (c = 0; c < i; ++c)
{
ptr[i] = c + 1;
}
printf(" ");
for (c = 0; c < i; ++i)
{
printf("%d", ptr[i]);
}
}
return (0);
}
