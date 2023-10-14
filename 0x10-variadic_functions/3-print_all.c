#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"


/**
 * print_char - ...
 * @pa: pointer to argument
 * @str: check flag to print ", " or not
 * Return: (void)
 */

void print_char(char *str, va_list pa)
{
	printf("%s%c", str, va_arg(pa, int));

}

/**
 * print_string - ...
 * @pa: pointer to argument
 * @str: check flag to print ", " or not
 * Return: (void)
 */
void print_string(char *str, va_list pa)
{
	char *ptr;

	ptr = va_arg(pa, char *);
	if (ptr == NULL)
	{
	printf("%s%s", str, "(nil)");
	return;
	}
	printf("%s%s", str, ptr);
}


/**
 * print_int - ...
 * @pa: pointer to argument
 * @str: check flag to print ", " or not
 * Return: (void)
 */
void print_int(char *str, va_list pa)
{
	printf("%s%d", str, va_arg(pa, int));

}
/**
 * print_float - ...
 * @pa: pointer to argument
 * @str: check flag to print ", " or not
 * Return: (void)
 */

void print_float(char *str, va_list pa)
{
	printf("%s%f", str, va_arg(pa, double));

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
	char *str = "";

	op_t identifier[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"f", print_float}
	};

	va_start(pa, format);

	while (format[i] && format)
	{
		j = 0;


		while (j < 4)
		{
			if (identifier[j].ch[0] == format[i])
			{
				identifier[j].f(str, pa);
			}
			str = ", ";

			j++;
		}
		i++;
	}

	va_end(pa);
	printf("\n");
}
