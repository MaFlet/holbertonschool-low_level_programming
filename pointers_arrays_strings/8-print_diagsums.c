#include "main.h"
#include "stdio.h"
/**
*print_diagsums - prints sum of 2 diagonals
*of a square matrix of integers
*@a: array pointers of integers
*@size: array size
*Return: 0 (Success)
*/
void print_diagsums(int *a, int size)
{
int i;
int c;
int primary;
int secondary;
primary = 0;
secondary = 0;
i = 0;
c = 1;
while (i < size)
{
primary = primary + a[(size + 1) * i];
secondary = secondary + a[(size - 1) * c];
c++;
i++;
}
printf("%d, %d\n", primary, secondary);
}
