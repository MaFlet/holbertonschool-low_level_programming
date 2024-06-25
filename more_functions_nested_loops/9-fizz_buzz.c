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
while (i++ < 100)
if ((i % 3 != 0) && (i % 5 != 0))
printf("FizzBuzz");
else if ((i % 3) == 0)
printf("Fizz");
else if ((i % 5) == 0)
{
if (i != 100)
printf("Buzz");
else
printf("Buzz");
}
else
printf("%d", i);
printf("\n");
return (0);
}
