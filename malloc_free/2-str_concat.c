#include "main.h"
#include <stdio.h>
#include <string.h>
/**
**str_concat - concatenates 2 strings
*@s1: first string
*@s2: string to allocate
*Return: NULL on failure or pointer to s1
*/
char *str_concat(char *s1, char *s2)
{
int i, c;
i = 0;
c = 0;
while (s1[i] != '\0')
i++;
while (src[c] != '\0' && c < n)
{
dest[i] = src[c];
i++;
c++;
}
dest[i] = '\0';
return (dest);
}
