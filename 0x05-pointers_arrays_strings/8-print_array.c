#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints n elements of array of integers,followed by semicolon
 *
 * @a: Array of integers to print
 * @n: Number of elements to print from the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d;\n", a[i]);
}
}
