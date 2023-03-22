#include <stddef.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array to iterate over
 * @size: size of the array
 * @action: pointer to the function to execute on each element of the array
 *
 * Description: This function iterates over each
 * element of the array and applies the function pointed to
 * by action to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && size > 0 && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
