#include "main.h"
/**
**_memcpy - copy memory area
*@dest: memory area
*@src: source of memory area to copy
*@n: number of bytes
*Return: *dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
insigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + n);
i++;
}
return (dest);
}
