#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with print function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int j;

for (j = 1 ; j <= 100 ; j++)
{
if (j % 3 == 0 && j % 5 == 0)
{
printf("FizzBuzz ");
}
else if (j % 3 == 0)
{
printf("Fizz ");
}
else if (j % 5 == 0)
{
if (j == 100)
{
printf("Bizz");
break;
}
printf("Bizz ");
}
else
{
printf("%d ", j);
}
}
return (0);
}
