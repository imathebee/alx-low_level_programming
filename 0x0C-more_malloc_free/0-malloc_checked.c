#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The amount of memory to be allocated
 * Return: On success, returns a pointer to the allocated memory.
 * On failure, the function causes normal process
 * termination with a status value of 98.
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
