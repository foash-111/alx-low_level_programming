#include"stdio.h"
#include"stdlib.h"

/**
 * main - entry point
 * @argc: num of argument
 * @argv: array of points to argument
 *
 * Return: (0) on success
*/

int main(int argc, char *argv[])
{
int i;
int count;

count = 0;
i = atoi(argv[1]);


if (argc != 2)
{
printf("Error\n");
return (1);
}

else if (i < 0)
{
printf("0\n");
return (0);
}
	else
{

count += i / 25;
i %= 25;

count += i / 10;
i %= 10;

count += i / 5;
i %= 5;

count += i / 2;
i %= 2;

count += i / 1;
i %= 1;

}

printf("%d\n", count);


return (0);

}
