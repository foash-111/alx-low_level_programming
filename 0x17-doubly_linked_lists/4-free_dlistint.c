#include"lists.h"
/**
 * free_dlistint - free_list
 * @head: pointer to the list
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

		while (head)
		{
		head = head->next;
		free(current);
		current = head;
		}
}
