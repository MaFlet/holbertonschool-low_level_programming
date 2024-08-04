#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
*flip_bits - returns number of bits you would need to flip
*to get from one number to another
*@n: binary number
*@m: another binary number
*Return: assigned number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int number = 0;
unsigned long int flip;
flip = n ^ m;
while (flip)
{
number += flip & 1;
flip >>= 1;
}
return (number);
}
