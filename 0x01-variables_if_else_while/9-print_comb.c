#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = 0; n <= 8; n++)
{
putchar(n + '0');
putchar(',');
putchar(' ');
}
putchar('9');
putchar('\n');
return (0);
}
