#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
**_strdup - returns a pointer to a newly allocated space
*in memory containing copy of string parameter
*@str: string parameter
*Return: pointer string NULL if otherwise
*/
char *_strdup(char *str)
{
char *string;
int c = 0, i = 1;
{
if (str == NULL)
return (NULL);
while (str[i])
{
i++;
}
string = malloc((sizeof(char) * i) +1);
if (string == NULL)
return (NULL);
while (c < i)
{
string[c] = str[c];
c++;
}
string[c] = '\0';
return (string);
}
}
