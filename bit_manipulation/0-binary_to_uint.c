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
unsigned int value = 0;
int index = 0;
if (b == NULL)
return (0);
while (b[index] == '0' || b[index] == '1')
{
value <<= 1;
value += b[index] - '0';
index++;
}
return (value);
}
