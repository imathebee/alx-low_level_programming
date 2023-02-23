#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *positive_or_negative - determines if a number is positive, negative or zero
 *@n: integer to be checked
 *Return: void
 */
void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
if  (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is positive\n", n);
}
return;
}
