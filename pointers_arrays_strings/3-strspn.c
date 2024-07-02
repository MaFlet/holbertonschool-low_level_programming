#include "main.h"
/**
**_strspn - calculates length (in bytes) of the
*intial segment of s which consists entirely
*of bytes in accept
*@s: main string
*@accept: containing contents similar to s
*Return: *s consist only of bytes from *accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
b++;
break;
}
else if (accept[i + 1] == '\0')
return (b);
}
s++;
}
return (b);
}
