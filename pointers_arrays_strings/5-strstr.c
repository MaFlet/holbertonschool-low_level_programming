#include "main.h"
/**
**_strstr - locates a substring
*@haystack: main string
*@needle: substring that needs to be located
*Return: pointer beginninng *needle substring
*NULL if otherwise
*/
char *_strstr(char *haystack, char *needle)
{
if (*haystack == '\0)
return (haystack);
while (*haystack)
{
if (*haystack == needle)
{
return (haystack)
}
haystack++;
}
if (needle == '\0')
return (s);
return ('\0');
}
