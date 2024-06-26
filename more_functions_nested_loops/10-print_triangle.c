#include "main.h"
/**
*print_triangle - prints a triangle
*@#: use to print triangle
*@size: size of square
*if size is 0 or less print new line
*Return: 0 (Success)
*/
void print_triangle(int size)
{
int i, c;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for ((c = size - i); c > 0; c--)
_putchar(' ');
for (c = 0; c < i; c++)
_putchar('#');
if (i == size)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
