#include"lists.h"

/**
 * free_listint2 - ....
 * @head: pointer to the head
 * Return: (void)
*/

void free_listint2(listint_t **head)
{

listint_t *current = *head;

if (head == NULL || *head == NULL)
return;

while (*head != NULL)
{
	current = *head;
	*head = (*head)->next;
	free(current);
}
*head = NULL;
}
