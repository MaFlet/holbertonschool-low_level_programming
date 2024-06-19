#include <stdio.h>
/**
*main - prints the alphabet in lowercase
*Return: 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z' ; letter++)
putchar(letter);
if (letter != 'e' && letter != 'q')
putchar('\n');
return (0);
}
