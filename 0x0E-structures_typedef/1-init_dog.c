#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d: pointer to the dog structure to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the dog's owner
 *
 * This function initializes a dog structure
 * with the given name, age, and owner.
 */
void init_dog(struct dog *d, char *name, double age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
