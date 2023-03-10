#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all arguments that it receives.
 * @argc: Number of arguments passed
 * @argv: Array of pointers to passed arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
