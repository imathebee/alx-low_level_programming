#include <stdlib.h>
/**
 * wordcount - get word count from string
 *             without any spaces
 *
 * @str: string that will be split into words to count.
 *
 * Return: The number of words
*/
int wordcount(char *str)
{
int words = 0;
while (*str)
{
if (*str == ' ')
str++;
else
{
words++;
while (*str != ' ' && *str)
str++;
}
}
return (words);
}
/**
 * free_array - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/
void free_array(char **ar, int i)
{
if (ar && i > 0)
{
while (i >= 0)
free(ar[i--]);
free(ar);
}
}
/**
 * strtow - split a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
*/
char **strtow(char *str)
{
int i, s, j, str_l, word;
char **string;
if (!str || !*str)
return (NULL);
str_l = wordcount(str);
string = malloc((str_l + 1) * sizeof(char *));
if (!string || str_l == 0)
return (NULL);
for (i = s = 0; i < str_l; i++)
{
for (word = s; str[word]; word++)
{
if (str[word] == ' ')
s++;
else if (str[word + 1] == ' ' || str[word + 1] == '\0')
{
string[i] = malloc((word - s + 2) * sizeof(char));
if (!string[i])
{
free_array(string, i);
return (NULL);
}
break;
}
}
for (j = 0; s <= word; s++, j++)
string[i][j] = str[s];
string[i][j] = '\0';
}
string[i] = NULL;
return (string);
}
