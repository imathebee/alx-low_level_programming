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
int main(int argc, char *argv[])
{
int num1, num2;
char *operator;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]); /*if argument is string convert to number*/
num2 = atoi(argv[3]); /* as stated above */
operator = argv[2];
if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*operator == 47 || *operator == 37) && num2 == 0)
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(operator)(num1, num2));
return (0);
}
