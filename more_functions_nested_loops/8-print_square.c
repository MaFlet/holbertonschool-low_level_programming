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
if (size <= 1)
_putchar('\n');
for (i = 1; i < 10; i++)
{
for (c = 1; c < 8; c++)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
}
