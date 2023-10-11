#include"dog.h"

/**
 * free_dog - free allocated memory
 * @d: pointer to the struct
 * Return: (void)
*/

void free_dog(dog_t *d)
{
free(d->name);
free(d->owner);
free(d);

}
