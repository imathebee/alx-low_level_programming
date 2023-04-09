#include "main.h"
/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the number to modify the bit in.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if successful, or -1 if the index is out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
mask = ~(1UL << index);
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n &= mask;
return (1);
}
