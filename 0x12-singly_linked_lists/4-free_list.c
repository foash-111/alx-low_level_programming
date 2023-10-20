#include"lists.h"

/**
 * free_list - free list
 * @head: pointer to the first node
 * Return: (void)
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head;
	if (temp != NULL)
	{
	if (temp->str != NULL)
	free(temp->str);
	free(temp);
	}
	head = head->next;
	}
}
