#include "main.h"
/**
*_abs - computes absolute value of integer
*@n: compute absolute value of integer
*Return: absolute value of integer
*/
int _abs(int n)
{
if (n < 0)
{
int abs_val;
abs_val = n * -1;
return (abs_val);
}
return (n);
}
