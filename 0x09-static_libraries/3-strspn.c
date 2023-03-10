#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the initial segment
 * @accept: Pointer to the bytes that are acceptable
 * Return: n bytes in initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
int lens = 0, lena = 0;
unsigned int n;
n = 0;
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
n++;
break;
}
}
if (j == lena)
{
return (n);
}
}
return (n);
}
