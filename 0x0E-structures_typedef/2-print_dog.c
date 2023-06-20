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



if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}

}
