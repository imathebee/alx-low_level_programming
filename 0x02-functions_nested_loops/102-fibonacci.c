#include <stdio.h>

/**
 *main - Entry point for the program
 *Description: Prints the first 50 Fibonacci numbers,
 *starting with 1 and 2, separated by comma and space
 *Return: Always 0 (success)
 */
int main(void)
{
int i;
int t1 = 1;
int t2 = 2;
int nextTerm;
printf("%d, %d", t1, t2);
for (i = 3; i <= 50; i++)
{
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
printf(", %d", nextTerm);
}
printf("\n");
return (0);
}
