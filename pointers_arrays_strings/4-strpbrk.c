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
int i, c;
i = 0;
while (s[i] != '\0')
{
for (c = 0; accept[c] != '\0'; c++)
{
if (s[i] == accept[c])
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
}
return ('\0');
}
