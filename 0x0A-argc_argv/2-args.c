#include"stdio.h"

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

i = 0;
while (i < argc)
{
	printf("%s\n", argv[i]);
i++;
}
return (0);

}
