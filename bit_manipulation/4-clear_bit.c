#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
*clear_bit - sets value of bit to 0 at given index
*@n: binary number
*@index: index starting from 0 of the bit you want to set
*Return: 1 if it worked or -1 if error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
if (*n & 1 << index)
*n ^= 1 << index;
return (1);
}
