#include "main.h"
/**
*main - Entry site
*Return: 0 (Success)
*/
void print_alphabet(void);
{
int i;
char letter;
for (i = 0; i < 10; i++)
letter = 'a';
while (letter <= 'z')
_putchar(letter);
letter++;
_putchar('\n');
return (0);
}
