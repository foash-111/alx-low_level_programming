#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>

/**
 * operator - struct
 * @ch: char
 * @f: pointer to function
 */
typedef struct operator
{
	char ch;
	void (*f)(va_list, int);
}op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
