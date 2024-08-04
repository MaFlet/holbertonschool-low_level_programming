#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*get_bit - returns value of bit given index
*@n: binary number
*@index: index starting from 0 of bit you want to get
*Return: value of index or -1 if error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
int value;
if (index > 63)
return (-1);
value = (n >> index) & 1;
return (value);
}
