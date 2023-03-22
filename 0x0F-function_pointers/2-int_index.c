#include <stddef.h>
/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Description: This function searches for an integer in an array
 * and returns the index of the first element for which the cmp function
 * does not return 0. If no element matches, -1 is returned.
 * If size <= 0, -1 is returned.
 *
 * Return: the index of the first element for which the cmp function
 * does not return 0, or -1 if no element matches
 * or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
