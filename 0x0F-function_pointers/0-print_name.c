#include <stdio.h>
/**
 * print_name - Calls a function pointer with a name argument
 * @name: Pointer to a string representing the name to be printed
 * @f: Pointer to a function that takes
 * a char pointer as its argument and returns void
 *
 * Description: This function takes a string representing
 * a name and a function pointer as arguments.
 * The function pointer is called with the name as its argument.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
