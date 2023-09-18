#include "main.h"

/**
 * _strlen - return the length of the string
 *
 * @s: the first parameter
 *
 * Return: int
*/

int _strlen(char *s)
{
int count;

count = 0;

while (s[count])
{
count++;
}
if (s == NULL)
return (0);
else
return (count);
}



/**
 * rev_string - prints a string followed by a new line
 *
 * @s: the first parameter
 *
 * Return: none
*/

void rev_string(char *s)
{
int i, count = 0;
char *temp = s;

i = _strlen(s);


while (count <= _strlen(s) / 2)
{
temp[count] = s[i - 1];
s[count] = temp[i - 1];
i--;
count++;
}


s[count] = '\0';
}
