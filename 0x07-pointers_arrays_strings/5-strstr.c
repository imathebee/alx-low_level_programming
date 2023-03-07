#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, lenhay, lenn;
lenhay = lenn = 0;
while (haystack[lenhay] != '\0')
{
lenhay++;
}
while (needle[lenn] != '\0')
{
lenn++;
}
for (i = 0; i < lenhay - lenn + 1; i++)
{
for (j = 0; j < lenn; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (j == lenn)
{
return (&haystack[i]);
}
}
return (NULL);
}
