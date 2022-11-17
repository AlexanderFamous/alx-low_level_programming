#include "dog.h"
#include <stdio.h>
/**
 * print_dog - A function that prints a struct
 * @d : First Member
 *
 * Description: Long description
 */
void print_dog(struct dog *d)
{
/* struct dog my_dog; */
if (d)

d->name ? (printf("Name : %s\n", d->name)) : (printf("Name: (nil)\n"));

printf("Age : %f\n", d->age);

d->owner ? (printf("Owner : %s\n", d->owner)) : (printf("Owner: (nil)\n"));



}


