#include "main.h"
/**
*print_rev - prints string in reverse
*@s: string in reverse
*Return: void
*/
void print_rev(char *s)
{
int i, c, len;
i = 0;
while (s[i] != '\0')
{
i++;
}
len = i;
for (c = len - 1; c >= 0; c--)
{
_putchar(s[c]);
}
_putchar('\n');
}
