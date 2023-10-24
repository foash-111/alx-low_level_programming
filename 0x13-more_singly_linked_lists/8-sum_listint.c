#include"lists.h"

/**
 * get_nodeint_at_index - ....
 * @head: pointer to the head
 * @index: nth node
 * Return: number of nodes
*/

int sum_listint(listint_t *head)
{
listint_t *current;
unsigned int count = 0;


if (head == NULL)
{
	return (NULL);
}

current = head;

while (current && count <= index)
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
