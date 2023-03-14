#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: A pointer to a new string containing the concatenated arguments,
 * or NULL if ac == 0 or av == NULL or if memory allocation fails.
 * Each argument is followed by a newline character in the new string.
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, total_len = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
len = strlen(av[i]);
total_len += len + 1;
}
str = malloc((total_len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < ac; i++)
{
len = strlen(av[i]);
memcpy(str + j, av[i], len);
j += len;
str[j++] = '\n';
}
str[j] = '\0';
return (str);
}
