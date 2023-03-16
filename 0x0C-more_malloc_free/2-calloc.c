#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of each element in bytes
 * Return: pointer to allocated memory, or NULL if allocation fails
 * Description: The function allocates memory for an array of nmemb elements
 * of size bytes each, and initializes the memory to zero.
 * If nmemb or size is 0, the function returns NULL.
 * If malloc fails, the function also returns NULL.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
*((char *)ptr + i) = 0;
}
return (ptr);
}
