#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to the char
 * @to: pointer to the char to set the pointer to
 *
 * This function sets value of the pointer to a char, pointed to by @s, to the
 * value of the pointer @to.
 */
void set_string(char **s, char *to)
{
*s = to;
}
