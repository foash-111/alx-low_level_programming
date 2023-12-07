#include"lists.h"
/**
 * add_node -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: array of pointers that each pointer points to a struct
 * @str: the string that in the struct
 *  Return: number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	
if (new_element->str == NULL)
	{
	free(new_element->str);
	free(new_element);
	return (NULL);
	}
	new_element->len = strlen(str);

	while (currunt ->next != NULL)
	{
		currunt = currunt->next;
	}

new_element->next = NULL;
currunt->next = new_element;

	return (new_element);
}
