#include "main.h"
/**
**cap_string - capitalize all words in string
*@n: check character
*Return: n
*/
char *cap_string(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
i++;
}
return (n);
}
