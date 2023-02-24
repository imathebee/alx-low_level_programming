#include "main.h"
/**
 * print_number - prints an integer to the console using _putchar
 * @n: integer to print
 *
**/
void print_number(int n)
{
int digit;
int divisor;
digit = 1;
divisor = 1;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / divisor > 9)
{
divisor *= 10;
}
while (divisor != 0)
{
digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
}
}

