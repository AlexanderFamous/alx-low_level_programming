#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A struct that givess some detail of a dog
 * @d: First member
 * @name: Second Member
 * @age: Third Member
 * @owner: Fourth Member
 *
 * Description: This struct datatype simply has two char member and
 * an int to give details of a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* struct dog *dog; */
/* my_dog = malloc(sizeof(struct dog)); */
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

