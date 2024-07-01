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
int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
