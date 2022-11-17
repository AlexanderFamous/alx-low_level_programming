#include "dog.h"
#include <stdio.h>
/**
 * print_dog : A function that prints a struct
 * @d : First Member
 *
 * Description: Long description
 */
void print_dog(struct dog *d)
{
/* struct dog my_dog; */
if (d->name == NULL || d->age = NULL || d->owner == NULL )
	printf("(nil)");
printf("Name : %s\n", d->name);

printf("Age : %f\n", d->age);

printf("Owner : %s\n", d->owner);



}


