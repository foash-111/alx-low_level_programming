#include"dog.h"
#include<stdio.h>
/**
 * print_dog - initialize struct dog
 *
 * @d:pointer points to the struct
 *
 * Return: nothing
*/



void print_dog(struct dog *d)
{



if (d == NULL)
putchar('\0');
else

{
if (d->name == NULL)
printf("(nil)");
else
{
printf("Name: %s\n", d->name);
}
if (d->age == 0)
printf("(nil)");
else
{
printf("Age: %f\n", d->age);
}
if (d->owner == NULL)
printf("(nil)");
else
{
printf("Owner: %s\n", d->owner);
}
}
}
