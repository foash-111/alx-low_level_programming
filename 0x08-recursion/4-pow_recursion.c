/**
 *_pow_recursion - find the result of power of the function
 *
 *@x: the base
 *@y: the power
 *
 *Return: the result
*/



int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else if (y == 1)
	return (x);
else
	return (x * _pow_recursion(x, y - 1));

}

