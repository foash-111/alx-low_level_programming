#include"main.h"

/**
 * _strcpy - copy a string to anther
 *
 *@dest: pointer to the buffer string
 *@src: pointer to the string that i want to copy
 *
 *Return: pointer to the new string
 *
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}
