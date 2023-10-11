#include<stdio.h>
#include"dog.h"

/**
 * print_dog - print dog data
 * @d: pointer to the struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("age: %f\n", d->age);
		else
		{
			d->age = 0;
			printf("age: %f\n", d->age);
		}

		if (d->owner)
			printf("owner: %s\n", d->owner);
		else
			printf("owner: (nil)\n");

	}
}
