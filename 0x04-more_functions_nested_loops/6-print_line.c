#include "main.h"
/**
 * print_line- draws a straight line in the terminal.
 * @n: the length of the line to draw
 */
void print_line(int n)
{
int j;
if (n <= 0)
{
_putchar('\n');
return;
}
for (j = 0; j < n; j++)
{
_putchar('-');
}
_putchar('\n');
}
