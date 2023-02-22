#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be processed
 *
 * Return: Value of the last digit of @n
 */
int print_last_digit(int n)
{
if (n % 10  < 0)
{
_putchar(-n % 10 + '0');
return (-n % 10);
}
else
{
_putchar(n % 10 + '0');
}
return (n % 10);
}
