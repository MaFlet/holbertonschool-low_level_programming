#include "main.h"
/**
*print_line - draws a straight line
*@n: number of times _ should be printed
*if n is 0 or less, it will print \n
*Return: 0 (Success)
*/
void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
