#include"lists.h"
/**
 * add_node_end -  a function that adds a new node
 * at the beginning of a list_t list.
 * @head: array of pointers that each pointer points to a struct
 * @str: the string that in the struct
 *  Return: number of nodes
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_element = NULL;
	list_t *current = NULL;

	new_element  = malloc(sizeof(*head));
	if (new_element == NULL)
	return (NULL);
	current  = malloc(sizeof(*head));
	if (current == NULL)
	return (NULL);
	new_element->str  = malloc(sizeof(str));

	if (new_element->str == NULL)
	{
	free(new_element->str);
	free(new_element);
	return (NULL);
	}

	new_element->str = strdup(str);
	new_element->len = strlen(str);

	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_element->next = NULL;
	current->next = new_element;

	return (new_element);
}
