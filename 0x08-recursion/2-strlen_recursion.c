#include"main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s: the start point of the string
 *
 *Return : the lenght of the string
 */

int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
_strlen_recursion(s + 1);
}
return (count++);




}
