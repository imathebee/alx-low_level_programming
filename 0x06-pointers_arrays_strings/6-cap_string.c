#include "main.h"
#include <string.h>
/**
*cap_string - capitalizes all words of a string
*@s: input string
*
*Return: resulting string
*/
char *cap_string(char *s)
{
int i;
int j;
char d[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int is_d = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (i == 0)
{
is_d = 1;
}
else
{
for (j = 0; j < (int)sizeof(d); j++)
{
if (s[i - 1] == d[j])
{
is_d = 1;
break;
}
}
}
if (is_d && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
is_d = 0;
}
return (s);
}

