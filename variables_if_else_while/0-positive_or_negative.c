#include <stdio.h>
/**
*main - entry site
*Description: if and else for positive and negative
*Return: 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%d is a positive\n", n);
}
else if (n == 0)
{
printf("%d is zero \n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
