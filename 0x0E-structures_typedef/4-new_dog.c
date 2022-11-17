#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - A struct that givess some detail of a dog
 * @name: First Member
 * @age: Second Member
 * @owner: Third Member
 *
 * Description: This struct datatype simply has two char member and
 * an int to give details of a dog
 *
 *Return: the struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

d->name = name;
d->age = age;
d->owner = owner;
return (d);
}

