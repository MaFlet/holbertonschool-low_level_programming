#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_numbers - prints numbers followed by a new line
*@separator: string printed between numbers
*@n: number of integers passed to the function
*@...: variable number of parameters to print numbers
*Return: 0 (Success)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, unsigned int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
putchar ('\n');
va_end(ap);
}
