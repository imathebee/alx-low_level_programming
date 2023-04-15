#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int i = 1;
while (argv[i] != NULL)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}

