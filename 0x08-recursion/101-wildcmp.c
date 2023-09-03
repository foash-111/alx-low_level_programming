#include <stdio.h>

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
 *help_wildcmp_helper - help the functhin plndrm
 *
 *@s1:string we check
 *@s2:the start point from 0
 *@s1_len:the end point
 *@s2_len:length of the second string
 * Return: 1 on success
*/

int help_wildcmp_helper(char *s1, char *s2, int s1_len, int s2_len)
{
if (s1_len < 0 || s2_len < 0 || s2[s2_len] == '*')
return (1);
if (s1[s1_len] == s2[s2_len])
return (help_wildcmp_helper(s1, s2, s1_len - 1, s2_len - 1));
else
return (0);

}


/**
 * wildcmp_helper - help the functhin plndrm
 *
 *@s1:string we check
 *@s2:the start point from 0
 *@s1_counter:the end point
 *@s2_counter:length of the second string
 * Return: 1 on success
*/

int wildcmp_helper(char *s1, char *s2, int s1_counter, int s2_counter)
{

int s1_len = _strlen_recursion(s1);
int s2_len = _strlen_recursion(s2);

if (s2_counter == s2_len - 1)/*reach to the end of the string*/
return (1);

if (s1[s1_counter] == s2[s2_counter])
return (wildcmp_helper(s1, s2, s1_counter + 1, s2_counter + 1));


if (s1[s1_counter] != s2[s2_counter] && s2[s2_counter] != '*')
return (0);
else
{

return (help_wildcmp_helper(s1, s2, s1_len - 1, s2_len - 1));
}
}

/**
 * wildcmp - help the functhin plndrm
 *
 *@s1:string we check
 *@s2:the start point from 0
 * Return: 1 on success
*/

int wildcmp(char *s1, char *s2)
{

return (wildcmp_helper(s1, s2, 0, 0));
}

