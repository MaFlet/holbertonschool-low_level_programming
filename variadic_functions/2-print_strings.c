#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - prints strings followed by a new line
*@separator: string printed between strings
*@n: number of integers passed to the function
*@...: variable number of parameters to print numbers
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *string;
va_start(ap, n);
for (i = 0; i < n; i++)
{
string = va_arg(ap, char *);
if (separator != NULL && i > 0)
{
printf("%s", separator);
}
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
}
putchar('\n');
va_end(ap);
}
