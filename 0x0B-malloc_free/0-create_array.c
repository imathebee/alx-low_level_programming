#include <stdlib.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specified char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: If size is 0, returns NULL. Otherwise, returns
 * a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
