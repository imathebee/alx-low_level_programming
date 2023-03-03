#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * infinite_add - Adds two numbers
 * @n1: First number to be added
 * @n2: Second number to be added
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if it can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0;
int len2 = 0;
int carry = 0;
int sum = 0; 
int i = 0;
int j = 0;
while (n1[len1])
len1++;
while (n2[len2])
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
while (i < len1 || j < len2 || carry)
{
sum = carry + (i < len1 ? n1[len1 - 1 - i] - '0' : 0) +
(j < len2 ? n2[len2 - 1 - j] - '0' : 0);
carry = sum / 10;
r[i + j] = sum % 10 + '0';
i += 1 * (i < len1);
j += 1 * (j < len2);
}
if (i + j == 0)
r[i + j++] = '0';
r[i + j] = '\0';
while (--j >= 0)
{
sum = r[j];
r[j] = r[i + j];
r[i + j] = sum;
}
return (r);
}


