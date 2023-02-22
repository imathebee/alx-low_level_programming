#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be processed
 *
 * Return: Value of the last digit of @n
 */
int print_last_digit(int n)
{
int ldigi;
ldigi = n % 10;
if (ldigi < 0)
{
_putchar(-ldigi + 48);
return (-ldigi);
}
else
{
_putchar(ldigi + 48);
}
return (ldigi);
}
