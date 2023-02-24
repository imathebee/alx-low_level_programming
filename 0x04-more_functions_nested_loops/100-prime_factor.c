#include <stdio.h>
#include <math.h>
#include <inttypes.h>
/**
 * main - Entry point of the program
 *
 * Description:function finds, prints largest prime factor of number.
 *
 *
 * Return: Always 0 (success)
 */
int main(void)
{
intmax_t num = 612852475143;
int largestFactor = 2;
int i;
while (num % 2 == 0)
{
num /= 2;
}
for (i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largestFactor = i;
num /= i;
}
}
if (num > 2)
{
largestFactor = num;
}
printf("%d\n", largestFactor);
return (0);
}
