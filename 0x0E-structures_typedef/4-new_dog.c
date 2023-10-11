#include"dog.h"

/**
 * new_dog - create new dog struct
 * @name: dogname
 * @age: dog age
 * @owner: dog owner
 * Return: pointerr to the new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);
else
{
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
	return (ptr);
}
