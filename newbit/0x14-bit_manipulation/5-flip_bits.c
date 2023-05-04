#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor;
unsigned int count;
xor = n ^ m;
count = 0;
while (xor > 0)
{
if (xor & 1)
count++;
xor >>= 1;
}
return (count);
}
