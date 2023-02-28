#include "main.h"
/**
 * *_strcpy - copies src,including (\0) dest.
 *
 * @dest: string of characters
 * @src: string of characters
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;
while (*src != '\0')
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (dest_start);
}
