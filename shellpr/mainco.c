#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * This function takes no arguments and returns an integer value
 * that represents the exit status of the program.
 *
 * Return: 0 if the program executes successfully, otherwise a
 * positive integer value is returned to indicate an error.
 */
int main(void)
{
char str[] = "The quick brown fox jumps over the lazy dog";
char **words;
int i;
words = split_string(str, " ");
for (i = 0; words[i] != NULL; i++)
{
printf("%s\n", words[i]);
}
free(words);
return (0);
}
