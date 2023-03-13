#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
concat = malloc(strlen(s1) + strlen(s2) + 1);
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}
