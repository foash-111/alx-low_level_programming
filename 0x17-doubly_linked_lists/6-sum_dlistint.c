#include"lists.h"
/**
 * sum_dlistint - sum of list data
 * @head: pointer to the head
 * Return: sum of the data of the list
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;

	}

	return (sum);
}
