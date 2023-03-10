#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len;
int i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0 ; i < n  &&  src[i] != '\0' ; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
