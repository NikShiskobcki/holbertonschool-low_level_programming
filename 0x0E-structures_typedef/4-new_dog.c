#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - main
 * @name : name dog
 * @age : age dog
 * @owner : owuner dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(name) + 1);

if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
else
{
new_dog->name = strcpy(new_dog->name, name);
}

new_dog->age = age;

new_dog->owner = malloc(sizeof(owner) + 1);

if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
else
new_dog->owner = strcpy(new_dog->owner, owner);

return (new_dog);
}
