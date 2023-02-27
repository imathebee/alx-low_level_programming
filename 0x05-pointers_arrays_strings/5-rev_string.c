#include "main.h"
/**
 * rev_string - reverses a string
 * @str: the string to reverse
 *
 * Return: void
 */
void rev_string(char *str)
{
int i;
int j;
char temp;
int len;
len = 0;
while (str[len] != '\0')
{
len++;
}
for (i = 0, j = len - 1; i < j; i++, j--)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}
