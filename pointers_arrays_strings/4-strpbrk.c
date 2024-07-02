#include "main.h"
/**
**_strpbrk - locates first occurence in s of
*any bytes in accept
*@s: main string
*@accept: containing contents matching to s
*Return: *s that match *accept and NULL if otherwise
*/
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
