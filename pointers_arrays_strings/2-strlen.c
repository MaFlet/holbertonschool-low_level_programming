#include "main.h"
/**
*_strlen - returns length of string
*@s: string length
*Return: void
*/
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
