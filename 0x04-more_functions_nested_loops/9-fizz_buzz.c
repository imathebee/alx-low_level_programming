#include <stdio.h>

int main (void)
{
int i;  
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{       
printf("Fizz");
printf(" ");
}
if (i % 5 == 0)
{       
printf("Buzz");
printf(" ");
}       
if ((i % 3) == 0 && (i % 5) == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", i);
printf (" ");
}
}
printf("\n");
return (0);
}

