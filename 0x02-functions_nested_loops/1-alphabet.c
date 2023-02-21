#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
/**
 * _putchar - writes a character to the standard output
 * @c: the character to write
 *
 * Return: on success, the character written
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return putchar(c);
}
void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

