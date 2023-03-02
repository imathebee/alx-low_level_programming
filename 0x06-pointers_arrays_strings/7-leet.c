#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the string
 */
char *leet(char *s)
{
int stringcount;
int leetcount;
char leetalphabet[] = "aAeEoOtTlL";
char leetnumbs[] = "4433007711";
stringcount = 0;
while (s[stringcount] != '\0')
{
leetcount = 0;
while (leetcount < 10)
{
if (leetalphabet[leetcount] == s[stringcount])
{
s[stringcount] = leetnumbs[leetcount];
}
leetcount++;
}
stringcount++;
}
return (s);
}
