#include "main.h"
/**
*puts2 - print every character of a string
*@str: character input
*Return: print
*/
void puts2(char *str)
{
int longi = 0;
int c = 0;
char *j = str
int o;
while (*j != '\0')
{
j++;
longi++;
}
c = longi - 1;
for (o = 0 ; o <= c ; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
