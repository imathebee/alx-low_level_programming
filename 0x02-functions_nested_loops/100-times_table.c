#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of times table (0 <= n <= 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
int i;
int j;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == 0)
{
printf("%d,", i * j);
}
else if (j == n)
{
printf(" %3d", i * j);
}
else
{
printf(" %3d,", i * j);
}
}
printf("\n");
}
}
