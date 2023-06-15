#include <stdio.h>
#include <stdlib.h>

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
unsigned int i,  size1, size2;
char *ptr;

size1 = 0, size2 = 0, i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (1)
{
	size1++;
if (*(s1 + i) == '\0')
{break; }
i++;
}
i = 0;
while (1)
{
if (*(s2 + i) == '\0')
{break; }
size2++;
i++;
}
if (n <= size2)
ptr = malloc(sizeof(char) * (size1 + n));
	else
	ptr = malloc(sizeof(char) * (size1 + size2));
if (ptr == 0 || (size1 + n) == 0)
{return (0); }
i = 0;
while (i < (size1 + n))
{
if (i < size1 - 1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - size1];
i++;
}
ptr[i] = '\0';
return (ptr);
}
