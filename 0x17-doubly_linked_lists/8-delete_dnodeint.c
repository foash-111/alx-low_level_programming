#include"lists.h"
/**
 * insert_dnodeint_at_index - insert_node_at_index
 * @head: pointer points to the head
 * @index: target index .. starting from 0
 * Return: the address of new node we inserted
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL;
	unsigned int count = 0;

	

	if (*head == NULL)
	{
		return (-1);
	}
current = *head;
while (current)
{
	if (count == index)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(current);
		}
		else if (current->next == NULL)
		{
			current->prev->next = NULL;
			free(current);
		}
		else
		{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		}
		return (1);
	}
	current = current->next;
	count++;
}
return (-1);
}
