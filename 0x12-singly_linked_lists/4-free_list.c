#include"lists.h"

/**
 * free_list - free list
 * @head: pointer to the first node
 * Return: (void)
*/
void free_list(list_t *head)
{

	free(head->str);
	free(head->next);
	free(head);

}
