#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block,
 * or NULL if the function fails
 * Description: The contents of the old memory block will be
 * copied to the newly allocated space, in the range from the start
 * of ptr up to the minimum of the old and new sizes.
 * If new_size > old_size, the "added" memory should not be initialized.
 * If new_size == old_size, do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size
 * and new_size. If new_size is equal to zero,
 * and ptr is not NULL, then the call is equivalent
 * to free(ptr) and return NULL.
 * Don't forget to free ptr when it makes sense.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size <= old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size);
free(ptr);
return (new_ptr);
}
