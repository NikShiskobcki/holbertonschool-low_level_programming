#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes dog
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
