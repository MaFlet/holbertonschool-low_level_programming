#include "main.h"
/**
*_isalpha - checks lowercase and uppercase character
*@c: check character
*Return: 1 for lowercase and uppercase character or 0 for otherwise
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
