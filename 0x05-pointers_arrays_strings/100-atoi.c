#include "main.h"
#include <limits.h>
/**
 * _atoi - Converts a string to an integer.
 *
 * @s: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
int giga = (result * sign);
if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
}
if (giga > INT_MAX)
{
return (INT_MAX);
}
else if (giga < INT_MIN)
{
return (INT_MIN);
}
return (giga);
}
