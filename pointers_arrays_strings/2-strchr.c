#include "main.h"
/**
**_strchr - locate character in string
*@s: string
*@c: check character
*Return: *c in string s or NULL otherwise
*/
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
return (s);
if (!s)
return ('\0');
}
return ('\0');
}
