#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *rot13(char *s)
{
char before[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0;
int j;
while (*(s + i) != '\0')
{
for (j = 0; j <= 51; j++)
{
if (*(s + i) == before[j])
{
*(s + i) = rot[j];
break;
}
}
i++;
}
return (s);
}

