#include <stdio.h>
/**
*int_index - searches for an integer
*@array: array of integers
*@size: number of elements in the array
*@cmp: pointer to function to be used to compare
*values
*Return: index of first element if cmp does not return to 0
*-1 if no element matches and -1 if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int index;
if (array == NULL || cmp == NULL)
return (-1);
for (index = 0; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}
return (-1);
}
