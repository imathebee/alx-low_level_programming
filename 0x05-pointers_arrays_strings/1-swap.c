#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 *
 * This function takes two pointers to integers as parameters, and swaps the
 * values of the integers that they point to. It does not return a value.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
