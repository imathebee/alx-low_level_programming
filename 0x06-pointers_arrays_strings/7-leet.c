#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
static char buffer[256];
int i;
int j;
for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
if (str[i] == 'a' || str[i] == 'A')
buffer[j] = '4';
else if (str[i] == 'e' || str[i] == 'E')
buffer[j] = '3';
else if (str[i] == 'o' || str[i] == 'O')
buffer[j] = '0';
else if (str[i] == 't' || str[i] == 'T')
buffer[j] = '7';
else if (str[i] == 'l' || str[i] == 'L')
buffer[j] = '1';
else
buffer[j] = str[i];
}
buffer[j] = '\0';
return (buffer);
}
