#include "main.h"
/**
**_strcat - concatenates 2 strings
*@dest: string appended
*@src: character to append
*Return: *dest
*/
char *_strcat(char *dest, char *src)
{
int i, c;
i = 0;
c = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[c] != '\0')
{
dest[i] = src[c];
i++;
c++;
}
dest[i++] = '\0';
return (dest);
}
