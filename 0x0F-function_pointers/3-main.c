#include<stdio.h>
#include"3-calc.h"
#include<stdlib.h>
#include<string.h>
/**
 * main - entry point
 *
 * @argc: numner of arguments
 * @argv: pointer to the arguments
 * Return: always 0 on succeed
 */
int main(int argc, char *argv[])
{
	char *ptr = argv[2];
	int first_num, last_num, result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((ptr[0] != '+' && ptr[0] != '-' && ptr[0] != '*'
				&& ptr[0] != '/' && ptr[0] != '%') || (strlen(ptr) != 1))
	{
		printf("Error\n");
		return (99);
	}

first_num = atoi(argv[1]);
last_num = atoi(argv[3]);

if (last_num == 0 && (ptr[0] == '/' || ptr[0] == '%'))
{
	printf("Error\n");
	return (100);
}

result = (*get_op_func(ptr))(first_num, last_num);

printf("%d\n", result);

return (0);
}

