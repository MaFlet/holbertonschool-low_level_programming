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
unsigned int value;
unsigned int index;
for (value = 0, index = 0; b[index] != '\0'; index++)
{
if (b[index] == '1')
value = (value << 1) | 1;
else if (b[index] == '0')
value <<= 1;
else if (b[index] != '0' && b[index] != '1')
return (0);
if (b == NULL)
return (0);
}
return (value);
}
