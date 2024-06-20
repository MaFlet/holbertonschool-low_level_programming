#include <stdio.h>
/**
*main - prints all numbers of base 16 lowercase
*Return: 0 (Success)
*/
int main(void)
{
char num;
for (num = 0; num <= 15; num++)
putchar("%x", num);
for (letter = "a"; letter <= 'f'; letter++)
putchar(letter);
putchar"\n");
return (0);
}
