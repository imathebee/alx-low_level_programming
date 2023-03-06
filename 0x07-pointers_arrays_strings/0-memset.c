#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value.
 * @s: Pointer to the memory area to be filled.
 * @b: The value to be written to the memory area.
 * @n: The number of bytes to be filled
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
{
*p++ = b;
}
return (s);
}
