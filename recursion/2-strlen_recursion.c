#include "main.h"
/**
*_strlen_recursion - returns length of string
*@s: string length
*Return: 0 (Success)
*/
int _strlen_recursion(char *s)
{
if (*s)
{
s++;
return (1 + _strlen_recursion(s));
}
return (0);
}
