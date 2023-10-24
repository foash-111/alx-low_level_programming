#include"lists.h"

/**
 * sum_listint - ....
 * @head: pointer to the head
 * Return: number of nodes
*/

int sum_listint(listint_t *head)
{
listint_t *current = head;
int sum = 0;

if (head == NULL)
{
	return (0);
}

while (current)
{
	sum += current->n;

	current = current->next;
}
return (sum);
}
