#include"dog.h"

/**
* _strdup - duplicate
* @str: string we want to dublicate
* Return: pointer to dublicated string
*/

char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc((sizeof(char) * len) + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}

/**
 * new_dog - create new dog struct
 * @name: dogname
 * @age: dog age
 * @owner: dog owner
 * Return: pointerr to the new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);
else
{
	ptr->name = _strdup(name);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->age = age;

	ptr->owner = _strdup(owner);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
}
	return (ptr);
}
