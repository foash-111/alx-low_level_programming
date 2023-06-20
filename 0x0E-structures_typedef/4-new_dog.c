#include"dog.h"
#include <stdlib.h>
#include<stdio.h>
/**
 * new_dog - initialize struct dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return:pointer to the copy of the struct
*/



dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;

ptr = malloc(sizeof(dog_t));

if (ptr == NULL)
	return (0);


ptr->name = name;
ptr->age = age;
ptr->owner = owner;


return (ptr);
}
