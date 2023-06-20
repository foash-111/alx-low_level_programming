#include"dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d:pointer points to the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/



void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->name = name;
d->age = age;
d->owner = owner;
}
