#include "main.h"
/**
*_sqrt_recursion - returns natural sqaure root
*of number
*@n: value to be checked
*Return: -1 if n does not have natural square root
*/
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
if (n < 0)
{
return (-1);
}
else
{
return (n);
}
}
