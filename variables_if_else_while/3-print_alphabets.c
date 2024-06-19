#include <stdio.h>
/**
*main - prints the alphabet in lowercase
*Return: 0 (Success)
*/
int main(void)
{
char letter;
for (lowercaseletter = 'a'; lowercaseletter <= 'z' ; lowercaseletter++)
putchar(lowercaseletter);
for (uppercaseletter = 'A'; uppercaseletter <= 'Z'; uppercaseletter++)
putchar(uppercaseletter);
putchar('\n');
return (0);
}
