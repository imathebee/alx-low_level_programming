#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int i;
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i <= len; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
