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
int space;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (space = size * i; space >= 1; space++)
{
_putchar(' ');
}
for (c = 1; c <= i; c++)
_putchar('#');
_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
