#include <stdio.h>
/**
*main - prints 1 to 100
*every multiples of 3 print Fizz
*every multiples of 5 print Buzz
*both 3 and 5 print FizzBuzz
*Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz");
if (i % 5 == 0)
printf("Buzz");
if ((i % 3 != 0) && (i % 5 != 0))
printf("FizzBuzz");
printf("\n");
}
return (0);
}
