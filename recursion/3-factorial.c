#include "main.h"
/**
*factorial - returns factorial of given number
*@n: factorial number
*Return: -1 if error and n is lower than 0
*/
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
