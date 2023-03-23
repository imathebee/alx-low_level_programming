#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters to sum.
 * @...: A variable number of parameters to sum.
 *
 * Return: The sum of all parameters. If n is 0, returns 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int result = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
result += va_arg(args, int);
}
va_end(args);
return (result);
}
