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
int sum = 0;

if (head == NULL)
{
	return (0);
}

current = head;

while (current)
{
	sum += current->n;

	current = current->next;
}
return (sum);
}
