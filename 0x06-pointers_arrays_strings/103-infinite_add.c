#include <stdio.h>
#include"main.h"

/**
 * rev_string - prints a string followed by a new line
 *
 * @s: the first parameter
 *
 * Return: none
*/

void rev_string(char *s)
{
int i = 0, count = 0;
char temp;

while (s[i])
i++;

while (count < i)
{
temp = s[i - 1];
s[i - 1] = s[count];
s[count] = temp;
i--;
count++;

}
}


/**
* infinite_add - add numbers in string
* @n1: first string
* @n2:second string
* @r: buffer string
* @size_r: the size of the buffer
* Return: pointer to the result(buffer)
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, len3 = 0, max = 0;
int x = 0, y = 0, temp = 0, flag = 1, j = 1;

while (n1[len1])
	len1++;
while (n2[len2])
	len2++;
if (len1 >= len2)
	max = len1;
else
	max = len2;

if (max >= size_r)
	return (0);
while (len1 >= 0 || len2 >= 0)
{
	if (len1 > 0)
		x = (int)(n1[len1 - 1] - 48);
	else
		x = 0;
	if (len2 > 0)
		y = (int)(n2[len2 - 1] - 48);
	else
		y = 0;
r[len3] = (char)(((x + y + temp) % 10) + 48);
temp = (x + y + temp) / 10;
	if (temp && flag)
	{
		max++, flag = 0;
	}
len1--, len2--, len3++;
}
if (max >= size_r)
	return (0);
rev_string(r);
if (r[0] == '0')
	while (j <= max)
		r[j - 1] = r[j], j++;
r[max] = '\0';
return (r);
}
