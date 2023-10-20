#include"lists.h"

/**
 * free_list - free list
 * @head: pointer to the first node
 * Return: (void)
*/
void free_list(list_t *head)
{
	if (head != NULL || head->str != NULL)
	{
	free(head->str);
	free(head);
	}

}
