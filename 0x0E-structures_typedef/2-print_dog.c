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
struct dog my_dog;

my_dog = d;

if (d == NULL)
printf("");
else

{
if (my_dog->name == NULL)
printf("(nil)");
else
{
printf("Name: %s\n", my_dog->name);
}
if (my_dog->age == NULL)
printf("(nil)");
else
{
printf("Age: %d\n", my_dog->age);
}
if (my_dog->owner == NULL)
printf("(nil)");
else
{
printf("Owner: %s\n", my_dog->owner);
}
}
}
