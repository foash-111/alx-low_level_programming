#include <stdio.h>
#include "dog.h"
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
struct dog *ptr;

ptr = d;

ptr->name = name;
ptr->age = age;
ptr->owner = owner;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
