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
int nlen, olen, i;

dog_t *d;
nlen = olen = 0;
/* Loop through the string  owner and name*/
while (name[nlen++])
	;
while (owner[olen++])
	;
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

/*allocate memory for d->name dynamically */
d->name = malloc(nlen *sizeof(d->name));
if (d == NULL)
return (NULL);
/* loop through the name sting and save a copy in another name variable */
for (i = 0; i < nlen; i++)
	d->name[i] = name[i];

d->age = age;

d->owner = malloc(olen * sizeof(d->owner));
if (d == NULL)
return (NULL);
for (i = 0 ; i < olen; i++)
d->owner[i] = owner[i];

return (d);
}

