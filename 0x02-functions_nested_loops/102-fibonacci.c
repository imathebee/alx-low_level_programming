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
long int t1 = 1;
long int t2 = 2;
long int nextTerm;
printf("%ld, %ld", t1, t2);
for (i = 3; i <= 50; i++)
{
nextTerm = t1 + t2;
t1 = t2;
t2 = nextTerm;
printf(", %ld", nextTerm);
}
printf("\n");
return (0);
}
