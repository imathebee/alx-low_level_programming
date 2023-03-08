#include "main.h"
/**
 * is_prime_number - Checks if a number is prime recursively.
 *
 * @n: The number to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (is_prime_number_helper(n, 2));
}
/**
 * is_prime_number_helper - Helper function for _is_prime_number.
 *
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number_helper(int n, int i)
{
if (i >= n)
return (1);
if (n % i == 0)
return (0);
return (is_prime_number_helper(n, i + 1));
}
