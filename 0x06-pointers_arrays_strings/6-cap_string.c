#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@s: input string
 *
 *Return: resulting string
 */
char *cap_string(char *s)
{
int i;
int len;
len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len ; i++)
{
if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}') && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}
