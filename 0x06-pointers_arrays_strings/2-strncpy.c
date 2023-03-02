#include "main.h"
/**
 * _strncpy - Copy the first n bytes of the src str into the dest str
 *
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * @n: Number of bytes to copy from source to destination
 *
 * Return: Pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

