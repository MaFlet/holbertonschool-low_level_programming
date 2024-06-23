#include "main.h"
/**
*print_sign - prints the sign of number
*@n: check character
*Return: 1 + if n is greater than 0 and -1 if less and 0 if otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
