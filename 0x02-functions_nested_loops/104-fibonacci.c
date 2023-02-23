#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int num1 = 1;
int num2 = 2;
int fib;
printf("%d, %d", num1, num2);
for (i = 2; i < 98; i++)
{
fib = num1 + num2;
printf(", %d", fib);
num1 = num2;
num2 = fib;
}
printf("\n");
return (0);
}
