#include "main.h"
/**
*print_sign - prints the sign of number
*@n: check character
*Return: 1 if n is greater than 0 and -1 if less
*/
int print_sign(int n)
{
if ((n > '0') || (n == '0') ||  n <= '0')
{
return (1);
}
return (0);
}
