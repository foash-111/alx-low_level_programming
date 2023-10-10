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
printf("%s\n", d->name);
else
printf("Name: (nil)\n");

if (d->age)
printf("%f\n", d->age);
else
printf("age: (nil)\n");

if (d->owner)
printf("%s\n", d->owner);
else
printf("owner: (nil)\n");
}
else
putchar('\0');
}
