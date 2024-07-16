#include <stdio.h>
/**
*array_iterator - executes a function  given as a
*parameter on each element of an array
*@array: array of integers
*@size: size of array
*@action: pointer to the fucntion you need to use
*Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < (int)size; i++)
action(array[i]);
}
