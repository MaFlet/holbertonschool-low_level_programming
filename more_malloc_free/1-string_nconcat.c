#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
**string_nconcat - concatenates 2 strings
*@s1: first string
*@s2: string to allocate
*@n: number of bytes
*Return: NULL on failure or pointer to s1
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, c = 0, j = 0, a = 0;
char *string;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[j])
j++;
if (n >= j)
a = i + j;
else
a = i + n;
string = malloc(sizeof(char) * a + 1);
if (string == NULL)
return (NULL);
j = 0;
while (c < a)
{
if (c <= i)
string[c] = s1[c];
if (c >= i)
{
string[c] = s2[j];
j++;
}
c++;
}
string[c] = '\0';
return (string);
}
