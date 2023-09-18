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
char temp;


i = _strlen(s);

while (count <= (i / 2) + 1)
{
temp = s[i - 1];
s[i - 1] = s[count];
s[count] = temp;
i--;
count++;

}
}
