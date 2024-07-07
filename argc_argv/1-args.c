#include "main.h"
#include <stdio.h>
/**
*main - prints its name
*@argc: argument count
*@argv: argument vector
*Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
printf("%d\n", argc);
for (i = 0; i < argc - 1; i++)
{
printf("%s", argv[i]);
}
return (0);
}
