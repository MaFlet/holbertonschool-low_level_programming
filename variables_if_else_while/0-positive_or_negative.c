#include <stdio.h>
/**
*main - entry site
*Description: if and else for positive and negative
*Return: 0 (Success)
*/
int main(void)
{
int num;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Input a number: ");
scanf("%d", &num);

if (num >= 0)
printf("%d is a positive number \n", num);
else
printf("%d is a negative number \n", num);
return (0);
}
