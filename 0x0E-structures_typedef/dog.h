#ifndef __DOG_H__
#define __DOG_H__
/**
 * struct dog - a struct that gives details of a dog
 * @name: First Member
 * @age: second member
 * @owner: Third member
 *
 * Description: Long Description
 */

typedef struct dog
{
char *name;
float age;
char *owner;

} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* __DOG_H__ */
