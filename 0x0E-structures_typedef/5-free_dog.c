#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that frees the memory allocated for a dog
 *
 * @d: pointer to the dog structure to be freed
 *
 * Return: void
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
