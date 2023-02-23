#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int i;
int num1 = 1;
int num2 = 1;
int fib;
printf("Enter the number of terms: ");
scanf("%d", &n);
if (n == 1)
{
printf("%d\n", num1);
}
else if (n == 2)
{
printf("%d, %d\n", num1, num2);
}
else
{
printf("%d, %d", num1, num2);
for (i = 3; i <= n; i++)
{
fib = num1 + num2;
printf(", %d", fib);
num1 = num2;
num2 = fib;
}
printf("\n");
}
return (0);
}
