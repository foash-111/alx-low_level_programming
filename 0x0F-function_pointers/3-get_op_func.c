#include<stdio.h>
#include"3-calc.h"

/**
 * get_op_func - Get the op func object
 * @s: char operator
 * Return: int(*)(int, int)..pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] ==  s[0])
		{
		return (ops[i].f);
		}
		i++;
	}
return (NULL);
}
