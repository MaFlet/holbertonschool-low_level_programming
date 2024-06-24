#include "main.h"
/**
*_isupper - checks uppercase character
*@c: character need to be checked
*Return: 1 if c is uppercase and 0 if otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
