#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: This function prints the fields of a struct dog in the
 * following format: Name: <name>, Age: <age>, Owner: <owner>.
 * If a field is NULL, it prints (nil) instead of the field value.
 * If the pointer to the struct dog is NULL, it does nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
