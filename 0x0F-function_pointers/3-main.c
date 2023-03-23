#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point for the 3-calc program
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments passed to the program
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
int num1, num2, result;
int (*op_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);
if (op_func == NULL)
{
printf("Error\n");
exit(99);
}
result = op_func(num1, num2);
printf("%d\n", result);
return (0);
}
