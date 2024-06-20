#include <stdio.h>
/**
*main - prints the alphabet in reverse
*Return: 0 (Success)
*/
int main(void)
{
char letter;
letter = 'z';
for (letter >= 'a')
putchar(letter);
letter--;
putchar('\n');
return (0);
}
