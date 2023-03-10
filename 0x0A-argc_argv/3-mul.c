#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: This function is the entry point of the program. It multiplies
 * two numbers passed as arguments and prints the result. If the program does
 * not receive two arguments, it prints an error message and returns 1.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if the program runs successfully, otherwise 1
 */
int main(int argc, char *argv[])
{
int num1;
int num2;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", num1 *num2);
return (0);
}
