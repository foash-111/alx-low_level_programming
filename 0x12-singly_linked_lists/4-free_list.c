#include"lists.h"

/**
 * free_list - free list
 * @head: pointer to the first node
 * Return: (void)
*/
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head)
	{
	if (temp != NULL)
	{
	if (temp->str != NULL)
	free(temp->str);
	free(temp);
	}
	temp = head->next;
	}
}
