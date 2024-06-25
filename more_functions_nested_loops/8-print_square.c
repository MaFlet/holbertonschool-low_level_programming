#include "main.h"
/**
*print_square - prints a square
*@#: use to print square
*@size: size of square
*if size is 0 or less print new line
*Return: 0 (Success)
*/
void print_square(int size)
{
int i, c;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (c = 0; c < (size - 1); c++)
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
