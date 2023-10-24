#include"lists.h"

/**
 * pop_listint - ....
 * @head: pointer to pointer to the head
 * Return: number of nodes
*/

int pop_listint(listint_t **head)
{
listint_t *current;
int data = 0;

if (head == NULL || *head == NULL)
{
	return (0);
}

current = *head;

data = current->n;

*head = (*head)->next;
free(current);

return (data);
}
