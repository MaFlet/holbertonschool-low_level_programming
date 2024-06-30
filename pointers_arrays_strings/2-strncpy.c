#include "main.h"
/**
**_strncpy - copy a string
*@dest: string appended
*@src: character to append
*@n: character check
*Return: void
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;
i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
