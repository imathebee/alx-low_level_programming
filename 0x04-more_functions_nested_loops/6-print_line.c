#include "main.h"
/**
 * print_line- draws a straight line in the terminal.
 * @n: the length of the line to draw
 */
void print_line(int n)
{
int j;
for (j = 0; j <= n; j++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('-');
}
}
_putchar('\n');
}

