#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_char - ...
 * @pa: pointer to argument
 * @last: check flag to print ", " or not
 * Return: (void)
 */

void print_char(va_list pa, int last)
{
	printf("%c", va_arg(pa, int));
	if (!last)
		printf(", ");
}

/**
 * print_string - ...
 * @pa: pointer to argument
 * @last: check flag to print ", " or not
 * Return: (void)
 */
void print_string(va_list pa, int last)
{
	char *ptr;

	ptr = va_arg(pa, char *);
	if (ptr == NULL)
	printf("(nil)");
	else
	printf("%s", ptr);

	if (!last)
		printf(", ");
}

/**
 * print_int - ...
 * @pa: pointer to argument
 * @last: check flag to print ", " or not
 * Return: (void)
 */
void print_int(va_list pa, int last)
{
	printf("%d", va_arg(pa, int));
	if (!last)
		printf(", ");
}
/**
 * print_float - ...
 * @pa: pointer to argument
 * @last: check flag to print ", " or not
 * Return: (void)
 */

void print_float(va_list pa, int last)
{
	printf("%f", va_arg(pa, double));
	if (!last)
		printf(", ");
}

/**
 * print_all - variadic function to print anything
 * @format: pointer to argument
 * @...: ...
 * Return: (void)
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	int i = 0, j = 0;

	op_t identifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};

	va_start(pa, format);

	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (identifier[j].ch[0] == format[i])
				identifier[j].f(pa, format[i + 1] == '\0');
			j++;
		}
		i++;
	}

	va_end(pa);
	printf("\n");
}
