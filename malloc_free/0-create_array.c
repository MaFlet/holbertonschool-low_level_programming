#include "main.h"
#include <stdlib.h>
/**
**create_array - creates an array of chars
*initializes it with a specific char
*@size: size of char
*@c: character to be checked
*Return: NULL if size = 0 pointer to an array if otherwise
*/
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
return ('\0');
s = malloc(size * sizeof(char));
if (s == '\0')
return ('\0');
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
