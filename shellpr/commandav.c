#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * split_string - Splits a string into an array of substrings.
 * @str: The string to be split.
 * @delim: The delimiter character used to split the string.
 *
 * Return: An array of substrings. NULL if memory allocation fails.
 */
char **split_string(char *str, const char *delim)
{
char **words = NULL;
int count = 0;
char *token;
token = strtok(str, delim);
while (token != NULL)
{
count++;
words = realloc(words, count *sizeof(char *));
if (words == NULL)
{
perror("realloc");
exit(EXIT_FAILURE);
}
words[count - 1] = token;
token = strtok(NULL, delim);
}
count++;
words = realloc(words, count *sizeof(char *));
words[count - 1] = NULL;
return (words);
}
