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
int i;
int j;
if (size <= 0)
{
printf("\n");
return;
}
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
printf("%02x ", (unsigned char)b[i + j]);
}
else
{
printf("   ");
}
}
printf(" ");
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
char c = b[i + j];
if (c < 32 || c > 126)
{
c = '.';
}
printf("%c", c);
}
}
printf("\n");
}
}
