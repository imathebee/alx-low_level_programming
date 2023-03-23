#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints any type of data
 *
 * @format: list of argument types passed to the function
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *
 * Return: void
 *
 * Description: This function prints any type of data
 *              depending on the format string provided.
 *              It takes a variable number of arguments of
 *              different types, along with a format string
 *              that specifies the types of arguments to expect.
 */
void print_all(const char * const format, ...)
{
char *str;
va_list args;
unsigned int i = 0;
char c;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
c = format[i];
switch (c)
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
