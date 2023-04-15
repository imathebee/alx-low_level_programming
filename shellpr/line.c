#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of program
 *
 * Return: Always 0.
 */
int main(void)
{
char *line = NULL;
size_t len = 0;
ssize_t nread;
printf("$ \n");
nread = getline(&line, &len, stdin);
if (nread != -1)
printf("You entered %s", line);
free(line);
return (0);
}
