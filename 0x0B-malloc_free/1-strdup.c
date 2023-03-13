#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a new string
 * which is a duplicate of the string `str`
 *
 * @str: A pointer to the string to duplicate
 *
 * Return: A pointer to the duplicated string,
 * or NULL if insufficient memory was available
 *         or if str is NULL
 */
char *_strdup(char *str)
{
char *duplicate;
if (str == NULL)
{
return (NULL);
}
duplicate = malloc(strlen(str) + 1);
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
