#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first_num = 1;
int second_num = 2;
int next_num = 0;
int sum = 0;
while (second_num <= 4000000)
{
if (second_num % 2 == 0)
{
sum += second_num;
}
next_num = first_num + second_num;
first_num = second_num;
second_num = next_num;
}
printf("%d\n", sum);
return (0);
}
