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
if (!b || !*b)
return (0);
value = 0;
index = 0;
while (b[index])
{
if (b[index] > 49)
return (0);
else if (b[index] == 49)
{
value <<= 1;
value += 1;
}
else
value <<= 1;
index++;
}
return (value);
}
