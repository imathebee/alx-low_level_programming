#include "main.h"
/**
 *string_toupper - Converts all lowercase letters of a string to uppercase.
 *@s: Pointer to the string to be converted.
 *
 *Return: Pointer to the resulting string.
 */
char *string_toupper(char *s)
{
int i;
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0 ; i < len; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
return (s);
}
