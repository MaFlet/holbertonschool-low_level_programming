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
int i, c;
unsigned int j;
i = 0;
c = 0;
j = 0;
while (s[i] != ' ' && s[i] != '\0')
{
while (accept[c] != '\0')
{
if (s[i] == accept[c])
j++;
}
i++;
j = 0;
}
return (j);
}
