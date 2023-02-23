#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned int first = 1;
unsigned int second = 2;
unsigned int next;
printf("%d, %d", first, second);
for (i = 2; i < 98; i++)
{
next = first + second;
printf(", %u", next);
first = second;
second = next;
}
printf("\n");
return (0);
}

