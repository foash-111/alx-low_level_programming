#include"dog.h"
#include<stdio.h>
/**
 * init_dog - initialize struct dog
 *
 * @d:pointer points to the struct
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
*/



void print_dog(struct dog *d)
{

if (d != NULL)
{
struct dog my_dog;

my_dog = d;

my_dog->name = "Poppy";
my_dog->age = 3.5;
my_dog->owner = "Bob";

}
else
printf("(nil)");
}
