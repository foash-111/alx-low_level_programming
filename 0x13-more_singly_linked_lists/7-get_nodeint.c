#include"lists.h"

/**
 * get_nodeint_at_index - ....
 * @head: pointer to the head
 * @index: nth node
 * Return: number of nodes
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current;
unsigned int count = 0;


if (head == NULL)
{
	return (NULL);
}

current = head;

while (count <= index)
{
	if (count == index)
	return (current);
	else
	{
	current = current->next;
	count++;
	}
}
return (NULL);
}
