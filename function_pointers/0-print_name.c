#include <stdio.h>
/**
*print_name - prints name
*@name: name
*@f: function pointer that returns to void
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
