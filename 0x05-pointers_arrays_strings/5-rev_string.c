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


while (count < _strlen(s))
{
temp[count] = s[count];
count++;
}

count = 0;

while (i > 0)
{
s[count] = temp[i - 1];
count++;
i--;
}

s[count] = '\0';
}
