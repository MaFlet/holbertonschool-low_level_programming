#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*set_bit - sets value of bit to 1 at given index
*@n: binary number
*@index: index starting from 0 of the bit you want to set
*Return: 1 if it worked or -1 if error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);
if (!((*n >> index) & 1))
{
*n += 1 << index;
return (1);
}
return (-1);
}
