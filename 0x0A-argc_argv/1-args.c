#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints the name of the program
 * @argc: Number of arguments passed
 * @argv: Array of pointers to passed arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
