#include "main.h"
/**
*main - Entry site
*Return: 0 (Success)
*/
void print_alphabet(void);
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}
