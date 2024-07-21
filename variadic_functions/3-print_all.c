#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - prints anything
*@format: lists all types of arguments passed to the function
*@...: variable number of parameters to print numbers
*Return: void
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *string, *separator = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(list, int));
break;
case 'i':
printf("%s%d", separator, va_arg(list, int));
break;
case 'f':
printf("%s%f", separator, va_arg(list, double));
break;
case 's':
string = va_arg(list, char *);
if (!string)
string = ("(nil)");
printf("%s%s", separator, string);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
