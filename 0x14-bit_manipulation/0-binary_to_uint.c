#include <stdlib.h>
#include <string.h>
#include <limits.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int len;
int i;
unsigned int result = 0;
len = strlen(b);
if (b == NULL)
{
return (0);
}
for (i = 0; i < len; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
if (result > UINT_MAX / 2)
{
return (0);
}
result = (result << 1) + (b[i] - '0');
}
return (result);
}

