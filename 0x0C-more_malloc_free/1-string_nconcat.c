#include "main.h"
#include <stdlib.h>

/**
 * strlen - calc length
 *
 *@str:address of the array
 *
 * Return: int -length-.
*/

unsigned int _strlen(char *str)
{
	unsigned int i, size;

	size = 0;
	i = 0;

while (1)
{
if (*(str + i) == '\0')
{
	break;
}

size++;
i++;
}

return (size);

}

/**
 * *string_nconcat - function init==array
 *
 * @s1:the address of the array1
 *
 * @s2:the address of the array2
 *
 * @n:number of chars of second array
 *
 * Return:char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, size1, size2;
char *ptr;

size1 = 0, size2 = 0, i = 0, j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size1 = _strlen(s1);
size2 = _strlen(s2);

if (n < size2)
{
	j = (size1 + n + 1);
	ptr = malloc(sizeof(char) * j);
}
	else
{
	j = (size1 + size2 + 1);
	ptr = malloc(sizeof(char) * j);
}
	if (ptr == 0)
		{return (0); }
i = 0;
if (j == 1)
	j = j;
else
{
while (i < j - 1)
{
if (i < size1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - size1];
i++;
}
}
ptr[i] = '\0';
return (ptr);
}
