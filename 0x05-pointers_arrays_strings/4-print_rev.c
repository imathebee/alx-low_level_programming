#include "main.h"
/**
 * print_rev - prints a string to stdout in reverse
 * @str: the string to print
 *
 * Return: void
 */
void print_rev(char *str)
{
int i;
int len;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
