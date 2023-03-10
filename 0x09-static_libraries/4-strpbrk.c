#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to be searched
 * @accept: The set of bytes to be searched for
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i, j, lens, lena;
lens = lena = 0;
while (s[lens] != '\0')
{
lens++;
}
while (accept[lena] != '\0')
{
lena++;
}
for (i = 0; i < lens; i++)
{
for (j = 0; j < lena; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
