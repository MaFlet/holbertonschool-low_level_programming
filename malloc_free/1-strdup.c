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
char *newstr;
int size = 0;
{
if (!str)
return (NULL);
string = str;
while (*string++)
size++;
newstr = malloc(size + 1);
if (!newstr)
return (NULL);
string = newstr;
while (*str)
*string++ = *newstr++;
*string = 0;
return (str);
}
}
