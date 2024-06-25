#include "main.h"
/**
*print_diagonal - draws a diagonal line
*@n: number of times \ should be printed
*if n is 0 or less, it will print \n
*Return: 0 (Success)
*/
void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
