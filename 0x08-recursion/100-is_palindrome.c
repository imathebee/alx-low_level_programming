#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome recursively.
 *
 * @s: The string to check.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (_is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _is_palindrome_helper - Helper function for is_palindrome.
 *
 * @s: The string to check.
 * @start: The starting index of the substring to check.
 * @end: The ending index of the substring to check.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int _is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (_is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * _strlen_recursion - Computes the length of a string recursively.
 *
 * @s: The string to compute the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
