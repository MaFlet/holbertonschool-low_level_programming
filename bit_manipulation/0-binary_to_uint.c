#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*binary_to_uint - converts a binary number to an
*unsigned int
*@b: pointing to string of 0 and 1 chars
*Return: converted number or 0 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int value = 1;
unsigned int index = 0;
unsigned int len;
int n;
len = strlen(b);
for (n = len - 1; n >= 0; n--)
{
if (b[n] != '0' && b[n] != '1')
return (0);
if (b[n] == '1')
{
index += value;
}
value *= 2;
}
return (index);
}
