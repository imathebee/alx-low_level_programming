#include "main.h"
/**
 * _sqrt_recursion_helper - Computes the square root of a number recursively.
 *
 * @n: The number to compute the square root of.
 * @i: The current value to check.
 *
 * Return: square root of @n or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_recursion_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Computes the square root of a number recursively.
 *
 * @n: The number to compute the square root of.
 *
 * Return: square root of @n or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_recursion_helper(n, 1));
}
