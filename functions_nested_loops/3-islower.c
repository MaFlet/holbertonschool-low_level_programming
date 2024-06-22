#include "main.h"
/**
*_islower - checks lowercase character
*@c: check character
*Return: 1 for lowercase character or 0 for otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
