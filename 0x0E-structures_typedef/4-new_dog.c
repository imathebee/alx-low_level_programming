#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog with the given name, age, and owner
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * This function allocates memory for a new dog
 * structure and copies the given name and owner strings into
 * newly allocated memory. The age field of the new
 * dog is set to the given age value.
 *
 * Return: a pointer to the new dog structure,
 * or NULL if memory allocation
 * fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog_ptr;
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
{
return (NULL);
}
new_dog_ptr->name = strdup(name);
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}
new_dog_ptr->owner = strdup(owner);
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}
new_dog_ptr->age = age;
return (new_dog_ptr);
}
