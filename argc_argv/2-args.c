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
int counter;
for (counter = 0; counter < argc; counter++)
printf("argv[%2d]: %s\n", counter, argv[counter]);
return (0);
}
