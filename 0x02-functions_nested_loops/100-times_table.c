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
int result;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
printf("%d", result);
if (j < n)
{
printf(", ");
}
}
printf("\n");
}
}
