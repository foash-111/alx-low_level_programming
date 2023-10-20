#include"lists.h"
/**
 * list_len - print the data of the linked list
 * @h: pointer to the first node of the list
 * Return: number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
