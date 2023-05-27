#include <stdio.h>

/**
 * Fizz_Buzz_test - is a simple program that prints numbers from 1 to n
 *
 * For multiples of 3, it prints "Fizz" instead of the number
 *
 * for multiples of 5, it prints "Buzz".
 *
 * For multiples of both 3 and 5, it prints "FizzBuzz".
 *
 * @return None.
*/

void Fizz_Buzz_test(void)
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
}

/**
 * main - Entry point
 *
 * Description: A C program that prints with print function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
Fizz_Buzz_test();
return (0);
}
