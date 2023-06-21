#include<stdio.h>
#include<stdlib.h>
#include"function_pointers.h"


/**
 * print_name - function prints the name
 *
 * @name : the name you want to print
 *
 * @f:pointer functin takes one argument of data type char
 * or array of chars 'string ya3ny:)'
 *
 *
 *Return : nothing:)
 *
 */

void print_name(char *name, void (*f)(char *))
{

if (name != NULL  && f != NULL)
f(name);


}
