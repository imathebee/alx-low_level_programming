#include <stdio.h>
#include "main.h"
/**
 *print_buffer - Prints the content of a buffer.
 *@b: A pointer to the buffer to be printed.
 *@size: The number of bytes of the buffer to be printed.
 *Return: void
 */
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x:", i);
for (j = 0; j < 10; j++)
{
if (j % 2 == 0)
printf(" ");
if (i + j >= size)
printf("  ");
else
printf("%02x", *(b + i + j));
}
printf(" ");
for (j = 0; j < 10; j++)
{
if (i + j >= size)
break;
if (*(b + i + j) < 32 || *(b + i + j) > 126)
printf(".");
else
printf("%c", *(b + i + j));
}
printf("\n");
}
}



