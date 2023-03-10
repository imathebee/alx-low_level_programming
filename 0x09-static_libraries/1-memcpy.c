#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: a pointer to the destination array where the content is to be copied.
 * @src: a pointer to the source of data to be copied.
 * @n: the number of bytes to be copied.
 * Return: a pointer to dest.
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
*(dest + i) = *(src + i);
return (dest);
}
