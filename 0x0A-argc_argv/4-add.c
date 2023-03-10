#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program. It adds
 * positive numbers passed as arguments and prints the result. If the program
 * does not receive any  arguments, it prints 0.
 * If one of the number contains symbols that are not digits, it  print Error,
 * followed by a new line, and returns 1
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if the program runs successfully, otherwise 1
 */
int main(int argc, char *argv[])
{
int sum;
int i;
int j;
sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
