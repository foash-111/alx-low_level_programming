#include<stdio.h>
#include<stdlib.h>
#include"3-calc.h"

/**
  * op_add - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
*/

int op_add(int a, int b)
{
return (a + b);
}


/**
  * op_sub - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
  * op_mul - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division 2 nums
 *
 * @a:first parameter
 *
 * @b:second parameter
 *
 * Return:int
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
else
return (a / b);
}

/**
 * op_mod - modulus  2 nums
 *
 * @a:first parameter
 *
 * @b:second parameter
 *
 * Return:int
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
else
return (a / b);
}
