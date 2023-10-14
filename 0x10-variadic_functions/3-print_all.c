#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_all - variadic function to print anything
 * @format: pointer to argument
 * @...: ...
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0;
	char *str = "";
	char *ptr;

if (format != NULL)
{
	va_start(pa, format);

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", str, va_arg(pa, int));
			break;
		case 's':
		ptr = va_arg(pa, char *);
		printf("%s%s", str, ptr ? ptr : "(nil)");
			break;
		case 'f':
		printf("%s%f", str, va_arg(pa, double));
			break;
		case 'i':
		printf("%s%d", str, va_arg(pa, int));
			break;
		default:
		i++;
		continue;
		}
	str = ", ";

		i++;
	}
}
	va_end(pa);
	printf("\n");
}
