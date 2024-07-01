#include "main.h"
/**
**_strchr - locate character in string
*@s: string
*@c: check character
*Return: *c in string s or NULL otherwise
*/
char *_strchr(char *s, char c)
{
if (*s == '\0')
return (s);
while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
return (s);
return ('\0');
}
