#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - - Entry point
 *
 * Return: - 0 upon successful completion of the program.
 */
int main(void)
{
char str[100];
int i = 0;
int randNum = 0;
int numb = 0;
srand(time(NULL));
for (i = 0; numb <= 2644; i++)
{
randNum = (rand() % 25) + 65;
str[i] = randNum;
numb = numb + randNum;
}
str[i++] = 2772 - numb;
str[i++] = '\0';
printf("%s\n", str);
return (0);
}
