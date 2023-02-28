#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int num = 0;
int sign = 1;
while (*s != '\0')
{
if (*s == '-')
{
sign = -sign;
}
else if (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
}
else if (num > 0)
{
break;
}
s++;
}
return (num *sign);
}
