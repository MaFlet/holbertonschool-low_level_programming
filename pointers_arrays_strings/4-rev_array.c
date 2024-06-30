#include "main.h"
/**
*reverse_array - reverses content array of integers
*@a: integer
*@n: number of array elements
*Return: void
*/
void reverse_array(int *a, int n)
{
int i;
int c;
for (i = 0; i < n--; i++)
{
c = a[i];
a[i] = a[n];
a[n] = c;
}
}
