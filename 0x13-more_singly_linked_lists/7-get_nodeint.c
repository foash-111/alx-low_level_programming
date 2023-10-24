#include"lists.h"

/**
 * get_nodeint_at_index - ....
 * @head: pointer to the head
 * @index: nth node
 * Return: number of nodes
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;


if (head == NULL)
{
	return (NULL);
}



while (count <= index)
{
	if (count == index)
	return (current);
	else
	current = current->next;

	count++;
}
return (NULL);
}
