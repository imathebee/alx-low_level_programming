#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 * @n: the maximum number of bytes to concatenate from s2
 *
 * Return: a pointer to the newly allocated memory space containing the
 * concatenated string, or NULL if allocation fails
 *
 * Description: if n is greater or equal to the length of s2,
 * use the entire
 * string s2; if NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int s1_len = 0, s2_len = 0, i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[s1_len])
{
s1_len++;
}
while (s2[s2_len])
{
s2_len++;
}
if (n >= s2_len)
{
n = s2_len;
}
result = malloc(sizeof(char) * (s1_len + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < s1_len; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
