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
char *s;
unsigned int i;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
