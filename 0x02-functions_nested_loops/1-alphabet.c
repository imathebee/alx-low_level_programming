#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Return: void
 */


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

