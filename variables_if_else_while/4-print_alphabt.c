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
if (letter == 'q' || letter == 'e')
putchar('\n');
return (0);
}
