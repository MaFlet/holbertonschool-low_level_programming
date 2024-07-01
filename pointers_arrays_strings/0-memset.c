#include "main.h"
/**
**_memset - fills memory with constant byte
*@s: start memory address to be filled
*@b: value to be filled
*@n: number of bytes
*Return: *s
*/
char *_memset(char *s, char b, unsigned int n)
{
while (n)
{
s[n - 1] = b;
n--;
}
return (s);
}
