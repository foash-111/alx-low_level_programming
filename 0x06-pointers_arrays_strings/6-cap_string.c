#include <stdio.h>

/**
* cap_string - convert string to upper case
* @str: pointer to the first char of the string
* Return: pointer to the string after converted
*/

char *cap_string(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
i++;
}
return (str);

}
