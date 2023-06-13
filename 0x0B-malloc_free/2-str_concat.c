#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function init==array
 *
 * @s1:the address of the array1
 *
 * @s2:the address of the array2
 *
 * Return:char
*/

char *str_concat(char *s1, char *s2)
{
int i;
int size1, size2;
char *ptr;

size1 = 0;
size2 = 0;
i = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (1)
{
if (*(s1 + i) == '\0')
{break; }
size1++;
i++;
}
i = 0;
while (1)
{
size2++;
if (*(s2 + i) == '\0')
{break; }
i++; }
ptr = malloc(sizeof(char) * (size1 + size2));
if (ptr == 0 || (size1 + size2) == 0)
{return (0); }
i = 0;
while (i < (size1 + size2))
{
if (i < size1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - size1];
i++;
}
return (ptr);
}
