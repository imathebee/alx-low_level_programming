#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of an unsigned long int
 * @num: the number to be printed in binary
 * Return: no return value (void)
*/
void print_binary(unsigned long int num)
{
int i;
int leading_zeros_skipped = 0;
for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
if ((num >> i) & 1)
{
_putchar('1');
}
else
{
if (leading_zeros_skipped)
{
_putchar('0');
}
}
if ((num >> i) & 1)
{
leading_zeros_skipped = 1;
}
}
if (!leading_zeros_skipped)
{
_putchar('0');
}
}
