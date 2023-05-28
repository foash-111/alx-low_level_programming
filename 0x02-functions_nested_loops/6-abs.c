#include "main.h"

/**
 * _abs - checks digit
 * @n: the intger to check
 *
 *
 * Return: positive value of n.
*/

int _abs(int n)
{
if (n > 0)
{
printf("%d", n);

}
else if (n == 0)
{
printf("%d", n);
}
else
{
n = n * -1;
printf("%d", n);
}
