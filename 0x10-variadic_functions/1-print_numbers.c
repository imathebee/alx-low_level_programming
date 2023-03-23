#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of integers to print.
 *
 * This function takes a variable number of integers
 * as input, along with a string "separator" to be printed between the numbers,
 * and prints them to the console,
 * followed by a newline character. If the separator is NULL,
 * it is not printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
