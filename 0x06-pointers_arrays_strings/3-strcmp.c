#include <stdio.h>

/**
* _strcmp - compare two strings with each other
*@s1: pointer to the base string
* @s2: pointer to the string i want to concat it
* Return: s1 > s2 ? 1 , s1 < s2 ? -1 : 0
*/

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, max = 0, dif = 0;

while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
if (len1 >= len2)
{
max = len1;
}
else
{
max = len2;
}
while (i < max)
{
if (s1[i] == s2[i])
{
i++;
}
else
{
dif = s1[i] - s2[i];
break;
}
}
return (dif);

}
