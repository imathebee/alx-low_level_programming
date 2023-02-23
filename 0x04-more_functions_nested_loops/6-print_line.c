#include "main.h"
/**
 * print_line- draws a straight line in the terminal.
 * @n: the length of the line to draw
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
