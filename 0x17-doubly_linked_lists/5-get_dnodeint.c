#include"lists.h"
/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: pointer to the head
 * @index: node i want to return
 * Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = NULL;
	size_t count = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
