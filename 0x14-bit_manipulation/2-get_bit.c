#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check the bit in.
 * @index: The index of the bit to check.
 * Return: The value of the bit (0 or 1) at the given index.
 * or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
mask = 1UL << index;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
if ((n & mask) == 0)
{
return (0);
}
else
{
return (1);
}
}
