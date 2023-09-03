#include <stdio.h>

/**
 * palindrome_helper - help the functhin plndrm
 *
 * @s:string we check
 * @start:the start point from 0
 * @end:the end point
 *
 * Return: 1 on success
*/


int palindrome_helper(char *s, int start, int end)
{
if (start > end)
return (1);

if (s[start] == s[end])
return (palindrome_helper(s, start + 1, end - 1));
else
return (0);
}

/**
 * _strlen_recursion - function that returns the length of a string
 *
 *@s: the start point of the string
 *
 *Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
return ((count + 1) + _strlen_recursion(s + 1));
}
return (count);

}
/**
 * is_palindrome - check if the string is palindrome or not
 * @s: the string we check
 *Return: 1 on success
*/
int is_palindrome(char *s)
{
int end = _strlen_recursion(s);

if (end == 0)
return (1);

return (palindrome_helper(s, 0, end - 1));
}
