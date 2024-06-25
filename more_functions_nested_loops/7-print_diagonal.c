#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: number of times \ should be printed
*if n is 0 or less, it will print \n
*Return: 0 (Success)
*/
void print_diagonal(int n)
{
int i, c;
if (n <= 0)
_putchar('\n');
for (i = 0; i < n; i++)
{
for (c = 0; c < i; c++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
