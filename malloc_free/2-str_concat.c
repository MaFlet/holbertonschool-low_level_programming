#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**str_concat - concatenates 2 strings
*@s1: first string
*@s2: string to allocate
*Return: NULL on failure or pointer to s1
*/
char *str_concat(char *s1, char *s2)
{
int i, c, j, a;
char *string;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (c = 0; s2[c] != '\0'; c++)
;
c++;
string = malloc((sizeof(*s1) * i) + (sizeof(*s2) * c));
if (string == 0)
return (NULL);
for (j = 0, a = 0; j < i + c; j++)
{
if (j < i)
string[j] = s1[j];
else
string[j] = s2[a++];
}
return (string);
}
