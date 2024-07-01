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
while (n)
{
*(dest + n) = *(src + n);
n++;
}
return (dest);
}
